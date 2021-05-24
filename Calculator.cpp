#include "Calculator.h"

Calculator::Calculator (Eval_Expr_Tree & visitor) :
    visitor_ (visitor)
{
    
}

/*
Calculator::Calculator (Eval_Expr_Tree & visitor, Expr_Tree_Builder & builder) :
    visitor_ (visitor),
    builder_ (builder)
{

}
*/

int Calculator::evaluate (const std::string & input)
{
    if (!parse_expr (input)) {
        throw std::runtime_error ("Bad Expression");
        return -1;
    }
    else {
        return 1;
    }
    //std::unique_ptr <Expr_Node> expr (this->builder_.get_expression());
    /*
    if (nullptr == expr.get ()) {
        throw std::runtime_error ("No Expression!!");
    }
    */
    //return expr->eval ();
}

bool Calculator::parse_expr (const std::string & str)
{
    std::istringstream input (str);       //create an input stream parser
    std::string token;                      //current token in string/stream
    //this->builder_.start_expression ();     //start a new expression
    while (!input.eof()) {
        input >> token;
	std::cout << token << "\n";

        //Direct concrete builder
        if (token == "+") {
            //this->builder_.build_add_operator ();
        }
        else if (token == "-") {
            //this->builder_.build_subtract_operator ();
        }
        else if (token == "*") {
            //this->builder_.build_multiply_operator ();
        }
        else if (token == "/") {
            //this->builder_.build_divide_operator ();
        }
        else if (token == "(") {
            //this->builder_.build_open_parenthesis ();
        }
        else if (token == ")") {
            //this->builder_.build_close_parenthesis ();
        }
        else if (is_numeric(token)) {
            //std::stoi converts str to int
            //this->builder_.build_number (std::stoi(token));
        }
        else {
            //handle anything else
        }
    }
    return true;
}

bool Calculator::is_numeric (const std::string & str)
{
    char char_array[str.length()];
    strcpy(char_array, str.c_str());
    for (int i = 0; i < str.length(); i++) {
        if (isdigit(char_array[i])) {
            //non numeric character found in string
            return false;
        }
    }
    return true;
}