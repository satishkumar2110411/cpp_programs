#include <iostream>
using namespace std;

double max(double num1, double num2){
    if(num1 > num2){
        return num1;
    } else if(num2 > num1){
        return num2;
    } else {
        return num1;
    }
}

int main(){
    double x,y;
    cout << "Enter value of x: ";
    cin >> x;
    cout << "Enter value of y: ";
    cin >> y;
    cout << max(x,y);

    return 0;
}