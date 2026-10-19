#include <iostream>
using namespace std;

class BinOp {
    private:
        double operand1;
        char operation;
        double operand2;

    public:
        // This sets the default values for an undefined BinOp object, undefined as in not really defined by user
        BinOp() {
            operand1 = 0;
            operation = '+';
            operand2 = 0;
        }
        // This is the method through which we assign values to our object upon constructing it
        BinOp(double a, char b, double c){
            operand1 = a;
            operation = b;
            operand2 = c;
        }
        // This prints out the value between the two operands with the given expression
        double evaluate() {
            if (operation == '+') {
                return operand1 + operand2;
            } else {
                return operand1 - operand2;
            }
        }
};

class Person {
    public:
        //HERE virtual is used for RUNTIME POLYMORPHISM
        virtual void introduce(){
            cout<< "Im a person" << endl;
        };
};

//here student inherits the public attributes of Person
class Student: public Person{
    public:
        void introduce() override{
            cout<< "Im a student"<< endl;
        }
};

int main() {

    BinOp expression1(10,'+',20);
    BinOp expression2(50,'-',22);
    BinOp expression3;

    cout << expression1.evaluate() << endl;
    cout << expression2.evaluate() << endl;
    cout << expression3.evaluate() << endl;

    Student thisguy1;
    Person thisguy2;

    Person *ptr = &thisguy1;
    ptr->introduce();

    thisguy1.introduce();
    //here we can still call the hidden introduce inherited from Person object/class
    thisguy1.Person::introduce();
    thisguy2.introduce();

    return 0;
}