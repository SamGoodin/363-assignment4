#ifndef _EXPR_BUILDER_H_
#define _EXPR_BUILDER_H_

#include "Expr_Node.h"

class Expr_Builder {
    //  Builder
    public:
        Expr_Builder (void);
        ~Expr_Builder (void);
        //...

        //Build nodes onto tree
        virtual void start_expression (void);
        virtual void build_number (int n) = 0;
        virtual void build_add_operator (void) = 0;
        virtual void build_subtract_operator (void) = 0;
        virtual void build_multiply_operator (void) = 0;
        virtual void build_divide_operator (void) = 0;
        virtual void build_open_parenthesis (void) = 0;
        virtual void build_close_parenthesis (void) = 0;

        virtual Expr_Node * get_expression (void) = 0;

};

#include "Expr_Builder.cpp"

#endif      // !defined _EXPR_BUILDER_H_