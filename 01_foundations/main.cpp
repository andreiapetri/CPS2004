#include <iostream>
using namespace std;

// Here the class is basically a struct that ate the apple of knowledge from the Eden Garden
// (like when Adam and Eve felt emberessment so they put clothes on themselves, they used to be naked before)
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
        //here we append the clothes on Adam and Eve, but without looking at them naked, we tell the postAPI to look at them
        void postAPI(double op1, char op, double op2){
            operand1 = op1;
            operation = op;
            operand2 = op2;
        }
};

int main() {

    BinOp expression1(10,'+',20);
    BinOp expression2(50,'-',22);

    cout << expression1.evaluate() << endl;
    cout << expression2.evaluate() << endl;

    return 0;
}