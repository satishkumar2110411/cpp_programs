#include <iostream>
using namespace std;

double max(double num1, double num2, double num3){
    if(num1>=num2 and num1>=num3){
        return num1;
    } else if(num2 >= num1 and num2>= num3){
        return num2;
    } else {
        return num3;
    }
}

int main(){
    double x,y,z;
    cout << "Enter x: ";
    cin >> x;
    cout << "Enter y: ";
    cin >> y;
    cout << "Enter z: ";
    cin >> z;
    cout << "Max = " << max(x,y,z) << endl;
    
    return 0;
}