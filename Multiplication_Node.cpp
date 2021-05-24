#include "Multiplication_Node.h"

Multiplication_Node::Multiplication_Node (void) :
    Binary_Expr_Node ()
{

}

Multiplication_Node::Multiplication_Node (Expr_Node * n1, Expr_Node * n2) :
    Binary_Expr_Node (n1, n2)
{

}

Multiplication_Node::~Multiplication_Node (void)
{
    
}

int Multiplication_Node::eval (void)
{
    //std::cout << "Subtraction (void)\n";
    int num1 = left_->eval();
    int num2 = right_->eval();
    return this->eval(num1, num2);
}

int Multiplication_Node::eval (int num1, int num2)
{
    return num1 * num2;
}

void Multiplication_Node::accept (Expr_Node_Visitor & v)
{
    v.Visit_Multiplication_Node (*this);
}