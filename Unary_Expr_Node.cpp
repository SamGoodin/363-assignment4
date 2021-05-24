#include "Unary_Expr_Node.h"

Unary_Expr_Node::Unary_Expr_Node (void)
{

}

Unary_Expr_Node::~Unary_Expr_Node (void)
{
    delete this->child_;
    this->child_ = nullptr;
}

int Unary_Expr_Node::eval (void)
{
    if (this->child_) {
        return this->child_->eval ();
    }
    else {
        return -1;
    }
}