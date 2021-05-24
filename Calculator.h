#ifndef _CALCULATOR_H_
#define _CALCULATOR_H_

#include "Addition_Node.h"
#include "Subtraction_Node.h"
#include "Multiplication_Node.h"
#include "Division_Node.h"
#include "Number_Node.h"
#include "Eval_Expr_Tree.h"
//#include "Expr_Tree_Builder.h"

#include <sstream>      //std::istringstream
#include <string>       //std::string, std::stoi
#include <cstring>      //std::strcpy
#include <memory>       //std::unique_ptr
#include <iostream>

class Calculator {
    //  Director
    //  Component
    public:
        Calculator (void);
        Calculator (Eval_Expr_Tree & visitor);
        //Calculator (Eval_Expr_Tree & visitor, Expr_Tree_Builder & builder);

        //int compositeExecute (void);
        //void execute (void);
        int evaluate(const std::string & input);
        bool parse_expr (const std::string & str);
        bool is_numeric (const std::string & str);

    private:
        Eval_Expr_Tree & visitor_;
        //Expr_Tree_Builder & builder_;

};

#include "Calculator.cpp"

#endif      // defined _CALCULATOR_H_