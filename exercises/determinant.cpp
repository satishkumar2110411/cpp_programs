#include <iostream>
using namespace std;

int main(){
    int elements[9] = {0,0,0,0,0,0,0,0,0};
    for(int i=0;i<9;i++){
        int temp;
        cout << "Enter number: ";
        cin >> temp;
        elements[i] = temp;
    }
    int result = (elements[0]*(elements[5]*elements[8]-elements[6]*elements[7])-elements[1]*(elements[3]*elements[8]-elements[5]*elements[6])+elements[2]*(elements[3]*elements[7]-elements[4]*elements[6]));
    cout << "Result: " << result << endl;
    return 0;
}