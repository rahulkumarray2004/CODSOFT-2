#include <iostream>

using namespace std;

struct Calculator {
    double Number1;
    char Operation_to_be_done;
    double Number2;
    double result;
    void Calculate() {
        switch (Operation_to_be_done) {
            case '+':
                result = Number1 + Number2;
                break;
            case '-':
                result = Number1 - Number2;
                break;
            case '*':
                result = Number1 * Number2;
                break;
            case '/':
                if (Number2 != 0) {
                    result = Number1 / Number2;
                } else {
                    cout << "Error : Division by zero(0) is not allowed here." << endl;
                    exit(1);
                }
                break;
            default:
                cout << "Error: Invalid Operation." << endl;
                exit(1);
        }
    }
};
int main() {
    Calculator MYCALCULATOR;

cout << "Welcome to the Simple Calculator! " << endl;
    cout << "Enter first number: ";
    cin >> MYCALCULATOR.Number1;

    cout << "Enter any one Operation (+, -, *, /): ";
    cin >> MYCALCULATOR.Operation_to_be_done;

    cout << "Enter second number: ";
    cin >> MYCALCULATOR.Number2;

    MYCALCULATOR.Calculate();

    cout << "Result: " << MYCALCULATOR.result << endl;
return 0;
}