#ifndef _PRINT_INORDER_H_
#define _PRINT_INORDER_H_

#include <iostream>     //std::ostream
#include "Expr_Node_Visitor.h"

class Print_Inorder_Expression : public Expr_Node_Visitor {

    public:
        Print_Inorder_Expression (std::ostream & out);
        virtual ~Print_Inorder_Expression (void);

        //Methods for visiting concrete nodes
        virtual void Visit_Number_Node (const Number_Node & node);
        virtual void Visit_Addition_Node (const Addition_Node & node);
        virtual void Visit_Subtraction_Node (const Subtraction_Node & node);
        virtual void Visit_Multiplication_Node (const Multiplication_Node & node);
        virtual void Visit_Division_Node (const Division_Node & node);
        
        /*  
        //unsure which to do
        virtual void Visit_Open_Parenthesis_Node (const Open_Parenthesis_Node & node);
        virtual void Visit_Close_Parenthesis_Node (const Close_Parenthesis_Node & node);

        virtual void Visit_Parenthesis_Node (const Parenthesis_Node & node);
        */
    
    private:
        //output stream
        std::ostream & out_;

};

//#include "Print_Inorder_Expression.cpp"

#endif      // defined _PRINT_INORDER_H_