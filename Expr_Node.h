#ifndef _EXPR_NODE_H_
#define _EXPR_NODE_H_

#include <iostream>
#include "Expr_Node_Visitor.h"

class Expr_Node {

    public:
        Expr_Node (void);
        virtual ~Expr_Node (void);

        //Used to traverse the tree
        virtual int eval (void) = 0;    //visits all nodes in post-order
        virtual void accept (Expr_Node_Visitor & v) = 0;    //accepts visitors
        
        //virtual void print_preorder (std::ostream & out) = 0;
        //virtual void print_inorder (std::ostream & out) = 0;
        //virtual void print_postorder (std::ostream & out) = 0;
    
    protected:
        //Eval_Expr_Tree * visitor_;
        //Expr_Node * tree_;

};

#include "Expr_Node.cpp"

#endif  // defined _EXPR_NODE_H_