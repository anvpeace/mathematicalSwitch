#include <iostream>

using namespace std;

// Exercise 6.

// Copy the functions and their declarations created in the exercises from 1 to 5 and write sixth
// function "chooseOperation". The "chooseOperation" function should take one char parameter. The
// body of the function should contain a switch for the choice parameter which depending on the
// user input should invoke the corresponding mathematical functions from the exercises 1 to 5.

// Write a simple calculator program that asks the user to choose a mathematical operation to perform
// by inputting an operator symbol: '+' - addition, '-' - subtraction, '*' - multiplication,
// '/' - division, '^' - exponentiation. The mathematical symbol is used as the parameter for
// chooseOperation function. The calculator should work in an infinite loop.

// eg.

// User inputted:
// +

// Output:
// The result of addition function

void addition();

void subtraction();

void multiply();

void divide();

// void exponential();

void chooseOperator(char operations);

float operandOne;

float operandTwo;

char operation;

bool hasOperatorOperands= false;






int main (){

    cout << "Select first operand" << endl;
    cin >> operandOne;

     cout << "Select an operator" << endl;
    cin >> operation;

    cout << "Select second operand" << endl;
    cin >> operandTwo;

    hasOperatorOperands = true;

    if(hasOperatorOperands){

        chooseOperator(operation);
    }

    return 0;
}

void chooseOperator(char operations){

 switch (operation)
    {
    case '+':
        addition();
       
        break;
    case '-':
        subtraction();

        break;
    
    case '*':
        multiply();

        break;

    case '/':
        divide();

        break;

    // case '^':

    //     exponential();

    //     break;

    default:
        break;
    } 

}


void addition(){
    int sum = operandOne + operandTwo;
        cout << "The sum of " <<operandOne << operation << operandTwo << sum << endl;
}

void subtraction (){
    int difference = operandOne - operandTwo;
        cout << "The difference of the subtraction function " << difference << endl;
}

void multiply(){
    int product = operandOne * operandTwo;
        cout << "The product of the multiplication function " << product << endl;

}

void divide(){
    int quotient = operandOne / operandTwo;
        cout << "The quotient of " << operandOne << operation << quotient << endl;
    
}

// void exponential(){
//     int power
// }