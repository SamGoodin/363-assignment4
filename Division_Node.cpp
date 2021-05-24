#include "Division_Node.h"

Division_Node::Division_Node (void) :
    Binary_Expr_Node ()
{

}

Division_Node::Division_Node (Expr_Node * n1, Expr_Node * n2) :
    Binary_Expr_Node (n1, n2)
{

}

Division_Node::~Division_Node (void)
{
    
}

int Division_Node::eval (void)
{
    int num1 = left_->eval();
    int num2 = right_->eval();
    return this->eval(num1, num2);
}

int Division_Node::eval (int num1, int num2)
{
    if (num1 == 0 || num2 == 0) {
        //divide by zero
        throw std::runtime_error ("Divide by zero error");
    }
    else {
        return num1 / num2;
    }
}

void Division_Node::accept (Expr_Node_Visitor & v)
{
    v.Visit_Division_Node (*this);
}