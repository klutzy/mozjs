/* -*- Mode: C++; tab-width: 4; indent-tabs-mode: nil; c-basic-offset: 4 -*-
 * vim: set ts=8 sw=4 et tw=99 ft=cpp:
 *
 * This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

/*
 * JS reflection package.
 */
#ifndef jsreflect_h___
#define jsreflect_h___

#include <stdlib.h>
#include "jspubtd.h"

namespace js {

enum ASTType {
    AST_ERROR = -1,
#define ASTDEF(ast, str, method) ast,
#include "jsast.tbl"
#undef ASTDEF
    AST_LIMIT
};

enum AssignmentOperator {
    AOP_ERR = -1,

    /* assign */
    AOP_ASSIGN = 0,
    /* operator-assign */
    AOP_PLUS, AOP_MINUS, AOP_STAR, AOP_DIV, AOP_MOD,
    /* shift-assign */
    AOP_LSH, AOP_RSH, AOP_URSH,
    /* binary */
    AOP_BITOR, AOP_BITXOR, AOP_BITAND,

    AOP_LIMIT
};

enum BinaryOperator {
    BINOP_ERR = -1,

    /* eq */
    BINOP_EQ = 0, BINOP_NE, BINOP_STRICTEQ, BINOP_STRICTNE,
    /* rel */
    BINOP_LT, BINOP_LE, BINOP_GT, BINOP_GE,
    /* shift */
    BINOP_LSH, BINOP_RSH, BINOP_URSH,
    /* arithmetic */
    BINOP_ADD, BINOP_SUB, BINOP_STAR, BINOP_DIV, BINOP_MOD,
    /* binary */
    BINOP_BITOR, BINOP_BITXOR, BINOP_BITAND,
    /* misc */
    BINOP_IN, BINOP_INSTANCEOF,
    /* xml */
    BINOP_DBLDOT,

    BINOP_LIMIT
};

enum UnaryOperator {
    UNOP_ERR = -1,

    UNOP_DELETE = 0,
    UNOP_NEG,
    UNOP_POS,
    UNOP_NOT,
    UNOP_BITNOT,
    UNOP_TYPEOF,
    UNOP_VOID,

    UNOP_LIMIT
};

enum VarDeclKind {
    VARDECL_ERR = -1,
    VARDECL_VAR = 0,
    VARDECL_CONST,
    VARDECL_LET,
    VARDECL_LET_HEAD,
    VARDECL_LIMIT
};

enum PropKind {
    PROP_ERR = -1,
    PROP_INIT = 0,
    PROP_GETTER,
    PROP_SETTER,
    PROP_LIMIT
};

extern char const *aopNames[];
extern char const *binopNames[];
extern char const *unopNames[];
extern char const *nodeTypeNames[];

} /* namespace js */


#endif /* jsreflect_h___ */
