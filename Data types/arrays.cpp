#include <iostream>
using namespace std;
int main(){
    int luckyNums[] = {1,2,3,4,5,6,7,8,9,0};
    cout << luckyNums[1] <<endl;
    luckyNums[1] = 10;
    cout << luckyNums[1] << endl;

    int luckyNums_sized[20] = {1,2,3,4,5,6,7,8,9,0,10};
    luckyNums_sized[13] = 50;

    


    return 0;
}