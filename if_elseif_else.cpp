#include <iostream>
using namespace std;

int main(){
    bool isMale = false;
    bool isTall = true; 
    if(isMale and isTall){
        cout << "Student is a tall male" << endl;
    } else if(isMale and not isTall) {
        cout << "Student is a short male" << endl;
    } else if(not isMale and isTall) {
        cout << "Student is a tall female" <<endl;
    } else {
        cout << "Student is a short female" <<endl;
    }

    int time = 18;
    string result;
    result = (time<18)?"Good morning":"Good evening";
    cout << result;
    return 0;
}