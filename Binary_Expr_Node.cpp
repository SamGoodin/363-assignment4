#include "Binary_Expr_Node.h"

Binary_Expr_Node::Binary_Expr_Node (void) :
    Expr_Node ()
{

}

Binary_Expr_Node::Binary_Expr_Node (Expr_Node * left, Expr_Node * right) :
    Expr_Node (),
    left_ (left),
    right_ (right)
{

}

Binary_Expr_Node::~Binary_Expr_Node (void)
{
    delete right_;
    right_ = nullptr;
    delete left_;
    left_ = nullptr;
}

/*
int Binary_Expr_Node::eval (void)
{
   return 1;
}
*/


