#include <iostream>
using namespace std;

int main(){
    int correct = 7;
    int guess,counter;
    counter = 1;
    bool guess_status = false;

    while(correct != guess and !guess_status){
        if(counter<=5){
            cout << "Enter guess: ";
            cin >> guess;
            counter ++;
        } else {
            guess_status = true;
            cout << "Ran out of guesses" << endl;
        }
    } 
    if(guess_status == true){
        cout << "You lose";
    } else {
        cout << "You win";
    }
    return 0;
}