/*
 * MRustC - Rust Compiler
 * - By John Hodge (Mutabah/thePowersGang)
 *
 * hir_expand/main_bindings.hpp
 * - Functions defined in this folder that are called by main
 */
#pragma once

namespace HIR {
    class Crate;
};

extern void HIR_Expand_AnnotateUsage(::HIR::Crate& crate);
extern void HIR_Expand_Closures(::HIR::Crate& crate);
extern void HIR_Expand_UfcsEverything(::HIR::Crate& crate);
extern void HIR_Expand_Reborrows(::HIR::Crate& crate);
extern void HIR_Expand_ErasedType(::HIR::Crate& crate);
