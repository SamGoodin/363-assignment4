#ifndef _MULTIPLICATION_NODE_H_
#define _MULTIPLICATION_NODE_H_

#include "Binary_Expr_Node.h"
#include "Expr_Node_Visitor.h"

class Multiplication_Node : public Binary_Expr_Node {

    public:
        Multiplication_Node (void);
        Multiplication_Node (Expr_Node * n1, Expr_Node * n2);
        virtual ~Multiplication_Node (void);
        
        virtual int eval (void);
        virtual int eval (int num1, int num2);
        virtual void accept (Expr_Node_Visitor & v);

};

#include "Multiplication_Node.cpp"

#endif  // defined _MULTIPLICATION_NODE_H_