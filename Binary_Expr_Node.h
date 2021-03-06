#ifndef _BINARY_EXPR_NODE_H_
#define _BINARY_EXPR_NODE_H_

#include <typeinfo>
#include <iostream>
#include "Expr_Node.h"
#include "Expr_Node_Visitor.h"

class Binary_Expr_Node : public Expr_Node {

    public:
        Binary_Expr_Node (void);
        Binary_Expr_Node (Expr_Node * left, Expr_Node * right);
        virtual ~Binary_Expr_Node (void);
        //...
        
        virtual int eval (void) = 0;
        virtual void accept (Expr_Node_Visitor & v) = 0;

    public:
        Expr_Node * right_;
        Expr_Node * left_;

};

#include "Binary_Expr_Node.cpp"

#endif  // defined _BINARY_EXPR_NODE_H_