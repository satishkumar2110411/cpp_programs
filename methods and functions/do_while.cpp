#include <iostream>
using namespace std;

int main(){
    int index = 11;
    do{
        cout << index*2 << endl;
        index ++;
    } while(index <= 10);

    //do while will always execute the 
    //first condition of the loop

    return 0;
}