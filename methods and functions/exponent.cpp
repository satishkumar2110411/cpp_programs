#include <iostream>
using namespace std;

int pow(int base,int power){
    int result = 1;
    for(int i = 0;i<power;i++){
        result = result * base;
    }   
    return result;
}


int main(){
    int base, power;
    cout << "Enter the base: ";
    cin >> base;
    cout << "Enter the power: ";
    cin >> power;
    cout << base << '^' << power << '=' << pow(base, power) << endl;
    return 0;
}