#include "Expr_Tree_Builder.h"

Expr_Tree_Builder::Expr_Tree_Builder (void)
{

}

Expr_Tree_Builder::~Expr_Tree_Builder (void)
{
    //delete tree_;
    //tree_ = nullptr;
}

void Expr_Tree_Builder::start_expression (void)
{
    //this->tree_ = new Expr_Node ();
}

void Expr_Tree_Builder::build_number (int n)
{
    Number_Node * number = new Number_Node (n);
}

void Expr_Tree_Builder::build_add_operator (void)
{
    Binary_Expr_Node * op = new Addition_Node ();
}

void Expr_Tree_Builder::build_subtract_operator (void)
{
    Binary_Expr_Node * op = new Subtraction_Node ();
}

void Expr_Tree_Builder::build_multiply_operator (void)
{
    Binary_Expr_Node * op = new Multiplication_Node ();
}

void Expr_Tree_Builder::build_divide_operator (void)
{
    Binary_Expr_Node * op = new Division_Node ();
}

void Expr_Tree_Builder::build_open_parenthesis (void)
{
    //Unary_Expr_Node & op = new Parenthesis_Node ();
}

void Expr_Tree_Builder::build_close_parenthesis (void)
{
    //Unary_Expr_Node & op = new Parenthesis_Node ();
}

/*
Expr_Node * Expr_Tree_Builder::get_expression (void)
{
    //return this->tree_;
}
*/