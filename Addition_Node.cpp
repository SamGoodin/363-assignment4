#include "Addition_Node.h"

Addition_Node::Addition_Node (void) :
    Binary_Expr_Node ()
{

}

Addition_Node::Addition_Node (Expr_Node * n1, Expr_Node * n2) :
    Binary_Expr_Node (n1, n2)
{

}

Addition_Node::~Addition_Node (void)
{
    
}

int Addition_Node::eval (void)
{
    int num1 = left_->eval();
    int num2 = right_->eval();
    return this->eval(num1, num2);
}

int Addition_Node::eval (int num1, int num2)
{
    return num1 + num2;
}

void Addition_Node::accept (Expr_Node_Visitor & v)
{
    v.Visit_Addition_Node (*this);
}