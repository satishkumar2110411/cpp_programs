#include <iostream>
using namespace std;

//user defined functions//
void print_hi(){
    cout << "Hi user" << endl;
}

//creating function stub or preinstance?//
void print_hello(string username);



//main function//
int main(){
    print_hi();
    print_hello("Administrator");

    return 0;
}

//giving code for the function stub created earlier//
void print_hello(string username){
    cout << "Hello " << username <<endl;
}