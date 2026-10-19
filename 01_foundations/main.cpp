#include <iostream>
using namespace std;

struct BinOp {
    double operand1;
    char operation;
    double operand2;
};

int main() {

    BinOp expression1;

    expression1.operand1 = 10;
    expression1.operation = '+';
    expression1.operand2 = 20;

    cout << expression1.operand1 << " "
     << expression1.operation << " "
     << expression1.operand2 << endl;
    return 0;
}