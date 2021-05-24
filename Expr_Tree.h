#ifndef _EXPR_TREE_H_
#define _EXPR_TREE_H_

#include "Binary_Expr_Node.h"
#include "Number_Node.h"
#include "Addition_Node.h"
#include "Subtraction_Node.h"
#include "Multiplication_Node.h"
#include "Division_Node.h"

class Expr_Tree {
    //  Builder product
    public:
        Expr_Tree (void);
        ~Expr_Tree (void);
        void add_number_node (Number_Node & node);
        void add_addition_node (Addition_Node & node);
        void add_subtraction_node (Subtraction_Node & node);
        void add_multiplication_node (Multiplication_Node & node);
        void add_division_node (Division_Node & node);

    private:
        Binary_Expr_Node * left_;
        Binary_Expr_Node * right_;

};

#include "Expr_Tree.cpp"

#endif  // defined _EXPR_TREE_H_