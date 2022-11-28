#include <iostream>

using namespace std;


int addition();

int subtraction();

int multiply();

float divide();

// void exponential();

char chooseOperator(char operations);

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

char chooseOperator(char operations){

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


int addition(){
    int sum = operandOne + operandTwo;
        cout << "The sum of " <<operandOne << operation << operandTwo << sum << endl;
}

int subtraction (){
    int difference = operandOne - operandTwo;
        cout << "The difference of the subtraction function " << difference << endl;
}

int multiply(){
    int product = operandOne * operandTwo;
        cout << "The product of the multiplication function " << product << endl;

}

float divide(){
    int quotient = operandOne / operandTwo;
        cout << "The quotient of " << operandOne << operation << quotient << endl;
    
}

// void exponential(){
//     int power
// }