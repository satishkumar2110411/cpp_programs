#include <iostream>
#include <cmath>
using namespace std;


double calculator(double x, double y, char op){
	switch(op){
		case '+':
			return x+y;
			break;
		case '-':
			return x-y;
			break;
		case '*':
			return x*y;
			break;
		case '/':
			if(y==0){
				cout << "Cannot divide by ";
				return 0;
			} else {
				return x/y;
			}
			break;
		case '^':
			return pow(x,y);
			break;
		default:
			cout << "Invalid entry";
			return 0;
	}
}

int main(){
	double num1,num2;
	char operation;
	cout << "Enter the first number: ";
	cin >> num1;
	cout << "Enter the second number: ";
	cin >> num2;
	cout << "Enter the operation: ";
	cin >> operation;
	cout << "Result = " << calculator(num1,num2,operation) << endl;
	return 0;
}