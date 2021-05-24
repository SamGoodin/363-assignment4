#include "Eval_Expr_Tree.h"

Eval_Expr_Tree::Eval_Expr_Tree (void)
{

}

Eval_Expr_Tree::~Eval_Expr_Tree (void)
{

}

void Eval_Expr_Tree::Visit_Addition_Node (const Addition_Node & node)
{
    // visit left node, visit right node, then perform operation (post order)
    if (node.left_ && node.right_) {
        int left = node.left_->eval();
        int right = node.right_->eval();
        result_ = left + right;
    }
    else if (node.left_ && !node.right_) {
        result_ = node.left_->eval();
    }
    else if (!node.left_ && node.right_) {
        result_ = node.right_->eval();
    }
}

void Eval_Expr_Tree::Visit_Subtraction_Node (const Subtraction_Node & node)
{
    if (node.left_ && node.right_) {
        int left = node.left_->eval();
        int right = node.right_->eval();
        result_ = left - right;
    }
    else if (node.left_ && !node.right_) {
        result_ = node.left_->eval();
    }
    else if (!node.left_ && node.right_) {
        result_ = node.right_->eval();
    }
}

void Eval_Expr_Tree::Visit_Multiplication_Node (const Multiplication_Node & node)
{
    if (node.left_ && node.right_) {
        int left = node.left_->eval();
        int right = node.right_->eval();
        result_ = left * right;
    }
    else if (node.left_ && !node.right_) {
        result_ = node.left_->eval();
    }
    else if (!node.left_ && node.right_) {
        result_ = node.right_->eval();
    }
}

void Eval_Expr_Tree::Visit_Division_Node (const Division_Node & node)
{
    if (node.left_ && node.right_) {
        int left = node.left_->eval();
        int right = node.right_->eval();
        if (left == 0 || right == 0) {
            //divide by zero
            throw std::runtime_error ("Zero found in division expression!");
        }
        else {
            result_ = left / right;
        }
        //result_ = left + right;
    }
    else if (node.left_ && !node.right_) {
        result_ = node.left_->eval();
    }
    else if (!node.left_ && node.right_) {
        result_ = node.right_->eval();
    }
}

void Eval_Expr_Tree::Visit_Number_Node (Number_Node & node)
{
    result_ = node.eval();
    //result_ = node.eval();
}

int Eval_Expr_Tree::result (void) const
{
    return this->result_;
}