#include <iostream>
using namespace std;

int main(){
    
    for(int i=1; i<=5; i+=2){
        cout << i*2 << endl;
    }

    int nums[] = {1,2,3,4,5,6,7,8,9};
    for(int j = 0; j<9;j++){
        cout << nums[j] << endl;
    }
    return 0;
}