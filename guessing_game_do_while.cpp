#include <iostream>
using namespace std;

int main(){

    int correct,guess;
    correct = 7;
    do{
        cout << "Enter guess: ";
        cin >> guess;
    } while (correct != guess);
    cout << "You win" <<endl;
    return 0;
}