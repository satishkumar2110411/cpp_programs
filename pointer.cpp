#include <iostream>
using namespace std;

int main(){
    int age = 17;
    string college = "IIIT Kottayam";
    double year = 0.5;
    
    //&<variable_name> returns the pointer value of a variable
    cout << "Age address: " << &age << endl;
    cout << "College address: " << &college << endl;
    cout << "Year address: " << &year << endl;

    /*creating a variable to store the memory address/pointer of 
    another variable*/

    int *pAge = &age;
    string *pCollege = &college;
    double *pYear = &year;

    cout << pAge;
    return 0;
}