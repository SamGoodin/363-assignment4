#include "Subtraction_Node.h"

Subtraction_Node::Subtraction_Node (void) :
    Binary_Expr_Node ()
{

}

Subtraction_Node::Subtraction_Node (Expr_Node * n1, Expr_Node * n2) :
    Binary_Expr_Node (n1, n2)
{

}

Subtraction_Node::~Subtraction_Node (void)
{
    
}

int Subtraction_Node::eval (void)
{
    int num1 = left_->eval();
    int num2 = right_->eval();
    return this->eval(num1, num2);
}

int Subtraction_Node::eval (int num1, int num2)
{
    return num1 - num2;
}

void Subtraction_Node::accept (Expr_Node_Visitor & v)
{
    v.Visit_Subtraction_Node (*this);
}