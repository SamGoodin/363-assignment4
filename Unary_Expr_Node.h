#ifndef _UNARY_EXPR_NODE_H_
#define _UNARY_EXPR_NODE_H_

#include "Expr_Node.h"

class Unary_Expr_Node : public Expr_Node {

    public:
        Unary_Expr_Node (void);
        virtual ~Unary_Expr_Node (void);

        virtual int eval (void);
        //virtual void accept (Expr_Node_Visitor & v);

    protected:
        Expr_Node * child_;

};

#include "Unary_Expr_Node.cpp"

#endif  //defined _UNARY_EXPR_NODE_H_