use darling::ToTokens;
use syn::visit_mut::VisitMut;
use syn::{Attribute, Expr, GenericArgument, ItemImpl, Lit, Meta, PathArguments, Type, TypePath};

/// From a let of attributes to an item, extracts the ones that are documentation, as strings.
pub fn extract_doc_lines(attributes: &[Attribute]) -> Vec<String> {
    let mut docs = Vec::new();

    for attr in attributes {
        if &attr.path().to_token_stream().to_string() != "doc" {
            continue;
        }

        if let Meta::NameValue(x) = &attr.meta {
            match &x.value {
                Expr::Lit(x) => match &x.lit {
                    Lit::Str(x) => {
                        docs.push(x.value());
                    }
                    _ => panic!("Unexpected content in doc string: not a string."),
                },
                _ => panic!("Unexpected content in doc string: not a literal."),
            }
        }
    }

    docs
}

struct LifetimeRemover;

impl syn::visit_mut::VisitMut for LifetimeRemover {
    fn visit_path_segment_mut(&mut self, path_segment: &mut syn::PathSegment) {
        match &mut path_segment.arguments {
            PathArguments::None => {}
            PathArguments::AngleBracketed(angled_args) => {
                let punctuated = std::mem::take(&mut angled_args.args);
                angled_args.args = punctuated
                    .into_iter()
                    .filter_map(|mut arg| match arg {
                        GenericArgument::Lifetime(_) => None,
                        _ => {
                            self.visit_generic_argument_mut(&mut arg);
                            Some(arg)
                        }
                    })
                    .collect();

                if angled_args.args.empty_or_trailing() {
                    path_segment.arguments = PathArguments::None;
                }
            }
            PathArguments::Parenthesized(_) => path_segment.arguments = PathArguments::None,
        }
    }

    fn visit_type_reference_mut(&mut self, type_reference: &mut syn::TypeReference) {
        type_reference.lifetime = None;
        self.visit_type_mut(&mut type_reference.elem);
    }
}

/// Ugly, incomplete function to purge `'a` from a `Generic<'a, T>`.
pub fn purge_lifetimes_from_type(the_type: &Type) -> Type {
    let mut rval = the_type.clone();

    LifetimeRemover.visit_type_mut(&mut rval);

    rval
}

pub fn get_type_name(impl_block: &ItemImpl) -> Option<String> {
    // Dereference the Box<Type> to get &Type
    let ty = impl_block.self_ty.as_ref();

    match ty {
        Type::Path(TypePath { path, .. }) => {
            // Extract the type name from the path segments
            let type_name = path.segments.iter().map(|segment| segment.ident.to_string()).collect::<Vec<_>>().join("::");
            Some(type_name)
        }
        _ => None, // Handle other types accordingly
    }
}

pub fn pascal_to_snake_case(s: &str) -> String {
    let mut result = String::new();
    let chars: Vec<char> = s.chars().collect();
    let len = chars.len();

    for (i, &c) in chars.iter().enumerate() {
        if c.is_uppercase() {
            if i > 0 {
                let prev = chars[i - 1];
                let next = if i + 1 < len { chars[i + 1] } else { '\0' };
                if prev.is_lowercase() || (prev.is_uppercase() && next.is_lowercase()) {
                    result.push('_');
                }
            }
            result.push(c.to_ascii_lowercase());
        } else {
            result.push(c);
        }
    }
    result
}
