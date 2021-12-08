#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int Int = 2;
    double Double = 2.5;    
    Double += 5;
    cout << Double <<endl;
    cout << Double + Int << endl;
    cout << 10/3 <<endl;
    cout << 10.0/3 <<endl;

    //math functions//

    cout << pow(2,5) <<endl;
    cout << pow(2,1.4) <<endl;
    cout << sqrt(35.999) <<endl;
    cout << round(4.6) <<endl;
    cout << ceil(4.3) <<endl;
    cout << floor(4.8) <<endl;
    cout << fmax(3,10) <<endl;
    cout << fmin(3,10) <<endl;

    return 0;
}