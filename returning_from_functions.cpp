#include <iostream>
#include <cmath>

using namespace std;

double cube(double num){
    cout << "The cube is ";
    return pow(num,3);
}


int main(){
    double x;
    cout << "Enter the number to be cubed: ";
    cin >> x;
    cout << cube(x);
    return 0;
}