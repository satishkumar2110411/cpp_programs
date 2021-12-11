#include <iostream>
#include <cmath>
using namespace std;

double calc(double num1, double num2, char operation){
    if(operation == '+'){
        return num1+num2;
    } else if(operation == '-'){
        return num1-num2;
    } else if(operation == '*'){
        return num1*num2;
    } else if(operation == '/'){
        return num1/num2;
    } else if(operation == '^'){
        return pow(num1,num2);
    } else {
        cout << "Invalid operator";

    }
}

int main(){
    double num1,num2;
    char operation;
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;
    cout << "Enter operation: ";
    cin >> operation;
    cout << num1 << operation << num2 << '=' << calc(num1,num2,operation) << endl;
    return 0;
}