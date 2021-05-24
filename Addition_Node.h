#ifndef _ADDITION_NODE_H_
#define _ADDITION_NODE_H_

#include "Binary_Expr_Node.h"
#include "Expr_Node_Visitor.h"

class Addition_Node : public Binary_Expr_Node {

    public:
        Addition_Node (void);
        Addition_Node (Expr_Node * n1, Expr_Node * n2);
        virtual ~Addition_Node (void);
        
        virtual int eval (void);
        virtual int eval (int num1, int num2);
        virtual void accept (Expr_Node_Visitor & v);
};

#include "Addition_Node.cpp"

#endif  // defined _ADDITION_NODE_H_