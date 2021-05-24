#ifndef _EXPR_NODE_VISITOR_H_
#define _EXPR_NODE_VISITOR_H_

//#include "Expr_Node.h"
//#include "Binary_Expr_Node.h"
class Number_Node;
class Addition_Node;
class Subtraction_Node;
class Multiplication_Node;
class Division_Node;

class Expr_Node_Visitor {

    public:
        Expr_Node_Visitor (void);
        virtual ~Expr_Node_Visitor (void);

        /*
        virtual void Visit_Number_Node (const Expr_Node & node) const = 0;
        virtual void Visit_Addition_Node (const Binary_Expr_Node & node) = 0;
        virtual void Visit_Subtraction_Node (const Binary_Expr_Node & node) = 0;
        virtual void Visit_Multiplication_Node (const Binary_Expr_Node & node) = 0;
        virtual void Visit_Division_Node (const Binary_Expr_Node & node) = 0;
        */

        //Methods for visiting concrete nodes
        virtual void Visit_Number_Node (Number_Node & node) = 0;
        virtual void Visit_Addition_Node (const Addition_Node & node) = 0;
        virtual void Visit_Subtraction_Node (const Subtraction_Node & node) = 0;
        virtual void Visit_Multiplication_Node (const Multiplication_Node & node) = 0;
        virtual void Visit_Division_Node (const Division_Node & node) = 0;

        /*  
        virtual void Visit_Open_Parenthesis_Node (const Open_Parenthesis_Node & node);
        virtual void Visit_Close_Parenthesis_Node (const Close_Parenthesis_Node & node);

        virtual void Visit_Parenthesis_Node (const Parenthesis_Node & node);
        */

};

#include "Expr_Node_Visitor.cpp"

#endif  // defined _EXPR_NODE_VISITOR_H_

