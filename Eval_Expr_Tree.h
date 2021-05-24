#ifndef _EVAL_EXPR_TREE_H_
#define _EVAL_EXPR_TREE_H_

#include <stdexcept>    // std::runtime_error

#include "Expr_Node_Visitor.h"
#include "Addition_Node.h"
#include "Subtraction_Node.h"
#include "Multiplication_Node.h"
#include "Division_Node.h"
#include "Number_Node.h"


class Eval_Expr_Tree : public Expr_Node_Visitor {

    public:
        Eval_Expr_Tree (void);
        virtual ~Eval_Expr_Tree (void);
        
        //Methods for visiting concrete nodes
        virtual void Visit_Number_Node (Number_Node & node);
        virtual void Visit_Addition_Node (const Addition_Node & node);
        virtual void Visit_Subtraction_Node (const Subtraction_Node & node);
        virtual void Visit_Multiplication_Node (const Multiplication_Node & node);
        virtual void Visit_Division_Node (const Division_Node & node);
        
        /*  
        virtual void Visit_Open_Parenthesis_Node (const Open_Parenthesis_Node & node);
        virtual void Visit_Close_Parenthesis_Node (const Close_Parenthesis_Node & node);

        virtual void Visit_Parenthesis_Node (const Parenthesis_Node & node);
        */

        int result (void) const;
    
    private:
        int result_;
        //other state for calculating result
};

#include "Eval_Expr_Tree.cpp"

#endif  // defined _EVAL_EXPR_TREE_H_