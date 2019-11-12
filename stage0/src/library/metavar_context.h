/*
Copyright (c) 2016 Microsoft Corporation. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.

Author: Leonardo de Moura
*/
#pragma once
#include "library/local_context.h"

namespace lean {
class metavar_decl : public object_ref {
public:
    metavar_decl();
    metavar_decl(name const & user_name, local_context const & ctx, expr const & type);
    metavar_decl(metavar_decl const & other):object_ref(other) {}
    metavar_decl(metavar_decl && other):object_ref(other) {}
    metavar_decl(obj_arg o):object_ref(o) {}
    metavar_decl(b_obj_arg o, bool):object_ref(o, true) {}
    metavar_decl & operator=(metavar_decl const & other) { object_ref::operator=(other); return *this; }
    metavar_decl & operator=(metavar_decl && other) { object_ref::operator=(other); return *this; }
    name const & get_user_name() const { return static_cast<name const &>(cnstr_get_ref(raw(), 0)); }
    local_context const & get_context() const { return static_cast<local_context const &>(cnstr_get_ref(raw(), 1)); }
    expr const & get_type() const { return static_cast<expr const &>(cnstr_get_ref(raw(), 2)); }
};

bool is_metavar_decl_ref(level const & l);
bool is_metavar_decl_ref(expr const & e);

name get_metavar_decl_ref_suffix(level const & l);
name get_metavar_decl_ref_suffix(expr const & e);

class metavar_context : public object_ref {
    class delayed_assignment : public object_ref {
    public:
        delayed_assignment();
        delayed_assignment(local_context const & lctx, exprs const & locals, expr const & v);
        delayed_assignment(delayed_assignment const & other):object_ref(other) {}
        delayed_assignment(delayed_assignment && other):object_ref(other) {}
        delayed_assignment(obj_arg o):object_ref(o) {}
        delayed_assignment(b_obj_arg o, bool):object_ref(o, true) {}
        delayed_assignment & operator=(delayed_assignment const & other) { object_ref::operator=(other); return *this; }
        delayed_assignment & operator=(delayed_assignment && other) { object_ref::operator=(other); return *this; }
        local_context const & get_lctx() const { return static_cast<local_context const &>(cnstr_get_ref(raw(), 0)); }
        exprs get_locals() const;
        expr const & get_val() const { return static_cast<expr const &>(cnstr_get_ref(raw(), 2)); }
    };
    struct interface_impl;
    friend struct interface_impl;
public:
    metavar_context();
    explicit metavar_context(obj_arg o):object_ref(o) {}
    metavar_context(b_obj_arg o, bool):object_ref(o, true) {}
    metavar_context(metavar_context const & other):object_ref(other) {}
    metavar_context(metavar_context && other):object_ref(other) {}
    metavar_context & operator=(metavar_context const & other) { object_ref::operator=(other); return *this; }
    metavar_context & operator=(metavar_context && other) { object_ref::operator=(other); return *this; }

    level mk_univ_metavar_decl();

    expr mk_metavar_decl(name const & user_name, local_context const & ctx, expr const & type);

    expr mk_metavar_decl(local_context const & ctx, expr const & type) {
        return mk_metavar_decl(name(), ctx, type);
    }

    optional<metavar_decl> find_metavar_decl(expr const & mvar) const;

    metavar_decl get_metavar_decl(expr const & mvar) const;

    /** \brief Return the local_decl for `n` in the local context for the metavariable `mvar`
        \pre is_metavar(mvar) */
    optional<local_decl> find_local_decl(expr const & mvar, name const & n) const;

    local_decl get_local_decl(expr const & mvar, name const & n) const;

    /** \brief Return the local_decl_ref for `n` in the local context for the metavariable `mvar`

        \pre is_metavar(mvar)
        \pre find_metavar_decl(mvar)
        \pre find_metavar_decl(mvar)->get_context().get_local_decl(n) */
    expr get_local(expr const & mvar, name const & n) const;

    bool is_assigned(level const & l) const;
    bool is_assigned(expr const & m) const;
    bool is_delayed_assigned(expr const & m) const;

    void assign(level const & u, level const & l);
    void assign(expr const & e, expr const & v);
    /*
      Add the delayed assignment
      ```
      e := Fun(locals, v)
      ```
      This kind of assignment is created by the `intro` tactic.
      The term `v` contains metavariables that have not been instantiated yet.
      So, `abstract_locals(locals, v)` would not work correctly.
      We also cannot create an auxiliary metavariable in this case since it would "solve" the new goal
      created by the `intro` tactic.

      \pre is_metavar_decl_ref(e)
    */
    void assign_delayed(expr const & e, local_context const & lctx, exprs const & locals, expr const & v);

    level instantiate_mvars(level const & l);
    expr instantiate_mvars(expr const & e);

    bool has_assigned(level const & l) const;
    bool has_assigned(levels const & ls) const;
    bool has_assigned(expr const & e) const;

    optional<level> get_assignment(level const & l) const;
    optional<expr> get_assignment(expr const & e) const;
    optional<delayed_assignment> get_delayed_assignment(expr const & e) const;

    /** \brief Instantiate the assigned meta-variables in the type of \c m
        \pre get_metavar_decl(m) is not none */
    void instantiate_mvars_at_type_of(expr const & m);

    /** \brief Return true iff \c ctx is well-formed with respect to this metavar context.
        That is, every metavariable ?M occurring in \c ctx is declared here, and
        for every metavariable ?M occurring in a declaration \c d, the context of ?M
        must be a subset of the declarations declared *before* \c d.

        \remark This method is used for debugging purposes. */
    bool well_formed(local_context const & ctx) const;

    /** \brief Return true iff all metavariables ?M in \c e are declared in this metavar context,
        and context of ?M is a subset of \c ctx */
    bool well_formed(local_context const & ctx, expr const & e) const;
};

/** \brief Check whether the local context lctx is well-formed and well-formed with respect to \c mctx.
    \remark This procedure is used for debugging purposes. */
bool well_formed(local_context const & lctx, metavar_context const & mctx);

/** \brief Check whether \c e is well-formed with respect to \c lctx and \c mctx. */
bool well_formed(local_context const & lctx, metavar_context const & mctx, expr const & e);

void initialize_metavar_context();
void finalize_metavar_context();
}