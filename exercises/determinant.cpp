#include <iostream>
using namespace std;

int main(){
    double matrix[3][3] = {};
    for(int i = 0;i<3;i++){
        cout << "Row " << i << endl;
        for(int j = 0;j<3;j++){
            double element;
            cout << "Enter element a" << i+1 << j+1 << ": " ;
            cin >> element;
            matrix[i][j] = element;
        }
        cout << '\n' ;
    }
    double determinant = matrix[0][0]*(matrix[1][1]*matrix[2][2]-matrix[1][2]*matrix[2][1]) - matrix[0][1]*(matrix[1][0]*matrix[2][2]-matrix[1][2]*matrix[2][0]) + matrix[0][2]*(matrix[1][0]*matrix[2][1]-matrix[1][1]*matrix[2][0]);
    cout << "Determinant of the given matrix is " << determinant;
    return 0;
}