#include <iostream>
using namespace std;

bool leap_year(int year){
    if(year%100==0){
        if(year%400 == 0){
            return true;
        } else {
            return false;
        }
    } else if(year %4 ==0){
        return true;
    } else {
        return false;
    }
}

double max_3(double num1, double num2, double num3){
    if(num1 >= num2 and num1 >= num3){
        return num1;
    } else if(num2 >= num1 and num2 >= num3){
        return num2;
    } else {
        return num3;
    }
}

string grade(double marks){
    if(marks>=75 and marks<=100){
        return "A";
    } else if(marks >= 60 and marks <75){
        return "B";
    } else if(marks >= 40 and marks <60){
        return "C";
    } else if(marks >=0 and marks <40){
        return "F";
    } else {
        return "Invalid marks entered!";
    }
}

double calc(double x, double y, char op){
    if(op == '+'){
        return x+y;
    } else if(op == '-'){
        return x-y;
    } else if(op == '*'){
        return x*y;
    } else if(op == '/'){
        if(y!=0){
            return x/y;
        } else {
            cout << "Cannot divide by 0" << endl;
            return 0;
        }
    } else {
        cout << "Invalid operator given";
        return 0;
    }
}

int main(){
    int p_type;
    cout << "Enter problem number: ";
    cin >> p_type;
    switch(p_type){
        case 1:
            int year;
            cout << "Enter the year: ";
            cin >> year;
            if(leap_year(year)){
                cout << year << " is a leap year" << endl;
            } else {
                cout << year << " is not a leap year" << endl;
            }
            break;

        case 2:
            double x,y,z;
            cout << "Enter first number: ";
            cin >> x;
            cout << "Enter second number: ";
            cin >> y;    
            cout << "Enter third number: ";
            cin >> z;
            cout << "Max = " << max_3(x,y,z) << endl;
            break;
        
        case 3:
            double marks;
            cout << "Enter your marks: ";
            cin >> marks;
            cout << "Grade: " << grade(marks) << endl;
            break;
        
        case 4:
            double num1,num2;
            char op;
            cout << "Enter the first number: ";
            cin >> num1;
            cout << "Enter the second number: ";
            cin >> num2;
            cout << "Enter the operation: ";
            cin >> op;
            cout << "Result = " << calc(num1,num2,op);
            break;
        
        default:
            cout << "Invalid problem number" << endl;
    }
    return 0;
}