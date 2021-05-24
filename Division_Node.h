#ifndef _DIVISION_NODE_H_
#define _DIVISION_NODE_H_

#include "Binary_Expr_Node.h"
#include "Expr_Node_Visitor.h"

class Division_Node : public Binary_Expr_Node {

    public:
        Division_Node (void);
        Division_Node (Expr_Node * n1, Expr_Node * n2);
        virtual ~Division_Node (void);
        
        virtual int eval (void);
        virtual int eval (int num1, int num2);
        virtual void accept (Expr_Node_Visitor & v);

};

#include "Division_Node.cpp"

#endif  // defined _DIVISION_NODE_H_