#ifndef _SUBTRACTION_NODE_H_
#define _SUBTRACTION_NODE_H_

#include "Binary_Expr_Node.h"
#include "Expr_Node_Visitor.h"

class Subtraction_Node : public Binary_Expr_Node {

    public:
        Subtraction_Node (void);
        Subtraction_Node (Expr_Node * n1, Expr_Node * n2);
        virtual ~Subtraction_Node (void);
        
        virtual int eval (void);
        virtual int eval (int num1, int num2);
        virtual void accept (Expr_Node_Visitor & v);

};

#include "Subtraction_Node.cpp"

#endif  // defined _SUBTRACTION_NODE_H_