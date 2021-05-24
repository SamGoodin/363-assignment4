#include <iostream>     //std::cout
#include <sstream>      //std::istringstream
#include <string>       //std::string, std::stoi

#include "Eval_Expr_Tree.h"
//#include "Expr_Tree_Builder.h"
#include "Calculator.h"

int main (int argc, char * argv [])
{
   Eval_Expr_Tree visitor;
   Eval_Expr_Tree & ref = visitor;
   Calculator calc(ref);
   //Expr_Tree_Builder builder;
   //Expr_Tree_Builder & bRef = builder;
   //Calculator calc(ref, bRef);

   std::string input;
   std::string character;
   bool loopCondition = true;
   while (loopCondition) {
      //Get the expression from user
      std::cout << "Enter an expression to evaluate or type QUIT to exit: ";
      std::getline(std::cin, input);
      if (input == "quit" || input == "QUIT") {
         break;
      }
      else {
         int result = calc.evaluate(input);
         std::cout << "\nResult: " << result << "\n";
      }
   }

}

