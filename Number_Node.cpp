#include "Number_Node.h"

/*
Number_Node::Number_Node (void) :
    Expr_Node ()
{

}
*/

Number_Node::Number_Node (int n) :
    Expr_Node (),
    value (n)
{

}

Number_Node::~Number_Node (void)
{
    /*
    delete leaf_;
    leaf_ = nullptr;
    */
}

int Number_Node::eval (void)
{
    return this->value;
}

void Number_Node::accept (Expr_Node_Visitor & v)
{
    v.Visit_Number_Node(*this);
}
