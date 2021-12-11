#include <iostream>
#include <cmath>
using namespace std;

double calculate(double x, double y,char op){
	double result;
	switch(op){
		case '+':
			result = x+y;
			break;
		case '-':
			result = x-y;
			break;
		case '*':
			result = x*y;
			break;
		case '/':
			if(y==0){
				cout << "Cannot divide by ";
				result = 0;
			} else {
				result = x/y;
			}
			break;
		case '^':
			result = pow(x,y);
			break;
		default:
			cout << "Invalid Entry";
	}
	return result;
}

int main(){
	double num1,num2;
	char operation;
	cout << "Enter the first number: ";
	cin >> num1;
	cout << "Enter the second number: ";
	cin >> num2;
	cout << "Enter the operation to be done: ";
	cin >> operation;
	cout << "Result = " << calculate(num1,num2,operation) << endl;	

	return 0;
}