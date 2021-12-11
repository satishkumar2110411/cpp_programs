/*
1. Leap Year
2. Max of 2 numbers
3. Max of 3 numbers
4. Calculator*/

#include <iostream>
using namespace std;

bool leap_year(int year){
    if(year%100==0){
        if(year%400==0){
            return true;
        } else {
            return false;
        }
    } else if(year%4==0){
        return true;
    } else {
        return false;
    }
}

double max_2(double x, double y){
    if(x>y){
        return x;
    } else {
        return y;
    }
}

double max_3(double x, double y, double z){
    if(x>=y and x>=z){
        return x;
    } else if(y>=x and y>=z){
        return y;
    } else {return z;}
}

void calculator(double x, double y, char op){
    switch(op){
        case '+':
            cout << x+y;
            break;
        case '-':
            cout << x-y;
            break;
        case '*':
            cout <<  x*y;
            break;
        case '/':
            cout << x/y;
            break;
        default:
            cout << "Invalid operator"; 
    }
}

int main(){
    char reply = 'y';
    while(reply != 'n'){
        int p_type = 1;
        cout << "Services provided \n 1. Leap Year\n 2. Max of 2 numbers\n 3. Max of 3 numbers\n 4. Calculator \n Enter the problem number: ";
        cin >> p_type;
        switch(p_type){
            case 1:
                int year; 
                cout << "Enter the year to be tested: ";
                cin >> year;
                bool leap_result;
                leap_result = leap_year(year);
                cout << ((leap_result == true)?"Leap year":"Not a leap year");
                break;
            case 2:
                double a,b;
                cout << "Enter the first number: ";
                cin >> a;
                cout << "Enter the second number: ";
                cin >> b;
                cout << "Max = " << max_2(a,b);
                break;
            case 3:
                int p,q,r;
                cout << "Enter the first number: ";
                cin >> p;
                cout << "Enter the second number: ";
                cin >> q;
                cout << "Enter the third number: ";
                cin >> r;
                cout << "Max = " << max_3(p,q,r);
                break;
            case 4:
                int num1,num2;
                char operation;
                cout << "Enter the first number: ";
                cin >> num1;
                cout << "Enter the operation to be done: ";
                cin >> operation;
                cout << "Enter the second number: ";
                cin >> num2;
                calculator(num1,num2,operation);
                break;
            default:
                cout << "Invalid problem number!" << endl;
        }
        cout << endl;
        cout << "Do you want to continue?(y/n): ";
        cin >> reply;
    }
    return 0;
}