#include "Subtraction.h"
#include "Division.h"
#include "ArithmeticExpression.h"
#include "string"
#include <iostream>
using namespace std;

Subtract::Subtract(string lOperand, string rOperand) : ArithmeticExpression(lOperand, rOperand) {  } //constructor substruct

string Subtract::evaluate(){   // substruct right part of the expression from the left part
    result = stof(leftOperand) - stof(rightOperand);  //substructing right operand from the left operand and assigning it to the result
	str = result;   //assigning result to the string
    return to_string((long double)(result));    //returning the result that is casted to an integer // long double
}   //end of evaluate function

void Subtract::print(){   //print function that is printing expression and the result
	cout << stof(leftOperand) << " - " << stof(rightOperand) << " = "<< result << endl;  // printing expression and result
}  // end of the print function
