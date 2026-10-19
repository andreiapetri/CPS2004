#include <iostream>
using namespace std;

struct BinOp {
    double operand1;
    char operation;
    double operand2;

    double evaluate() {
        if(this->operation == '+'){
            return operand1+operand2;
        }
        else{
            return operand1-operand2;
        };
    };
};

int main() {

    BinOp expression1;
    BinOp expression2;

    expression1.operand1 = 10;
    expression1.operation = '+';
    expression1.operand2 = 20;

    expression2.operand1 = 30;
    expression2.operation = '-';
    expression2.operand2 = 20;

    cout << expression1.evaluate() << endl;
    cout << expression2.evaluate() << endl;

    return 0;
}