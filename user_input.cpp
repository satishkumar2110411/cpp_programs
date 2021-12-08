#include <iostream>
using namespace std;

int main(){
    cout << "Getting user input" << endl;
    int age;
    cout << "Enter your age: ";
    cin >> age;
    cout << "You are " << age << " years old" <<endl;

    //for string input you can also use//
    string name;
    cout << "Enter name: ";
    getline(cin, name);
    cout << "Hello" << name <<endl;

    return 0;
}