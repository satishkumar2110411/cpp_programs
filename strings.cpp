#include <iostream>
using namespace std;
int main(){
    string phrase = "Hello";
    cout << phrase.length() << endl;
    cout << phrase[0] <<endl;
    phrase[0] = 'J';
    cout << phrase[0] <<endl;
    cout << phrase.substr(2,2);
    string phrase_sub = phrase.substr(2,3);
    cout << phrase_sub <<endl;
    return 0;
}