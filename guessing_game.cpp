#include <iostream>
using namespace std;

int main(){
    int secretNum = 7;
    int guess;
    cout << "Enter guess: ";
    cin >> guess;
    while(secretNum != guess){
        cout << "Incorrect answer guess again: ";
        cin >> guess;
    }
    cout << "You win!" << endl;
    return 0;
}