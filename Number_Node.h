#ifndef _NUMBER_NODE_H_
#define _NUMBER_NODE_H_

#include "Expr_Node.h"

class Number_Node : public Expr_Node {

    public:
        //Number_Node (void);
        Number_Node (int n);
        virtual ~Number_Node (void);
        
        virtual int eval (void);
        virtual void accept (Expr_Node_Visitor & v);

    private:
        int value;
        //Expr_Node * leaf_;

};

#include "Number_Node.cpp"

#endif  // defined _NUMBER_NODE_H_