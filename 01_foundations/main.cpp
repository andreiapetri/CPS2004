#include <iostream>
using namespace std;

class BinOp {
    private:
        double operand1;
        char operation;
        double operand2;

    public:
        BinOp(double a, char b, double c){
            operand1 = a;
            operation = b;
            operand2 = c;
        }
        double evaluate() {
            if (operation == '+') {
                return operand1 + operand2;
            } else {
                return operand1 - operand2;
            }
        }
};

int main() {

    BinOp expression1(10,'+',20);
    BinOp expression2(50,'-',22);

    cout << expression1.evaluate() << endl;
    cout << expression2.evaluate() << endl;

    return 0;
}