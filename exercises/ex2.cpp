#include <iostream>
#include <cmath>
using namespace std;

int gcd(int x,int y){
    int limit;
    if(x<=y){
        limit = x;
    } else {
        limit = y;
    }
    int i = 1;
    for(i;i<=limit;i++){
        if(x%i==0 and y%i==0){
            break;
        }
    }
    return i;
}

void prime_number(int num){
    if(num<0){
        cout << "Invalid Entry" << endl;
    } else if(num==2){
        cout << "Prime number" << endl;
    } else if(num==1){
        cout << "Neither prime nor composite" << endl;
    } else {
        int limit = sqrt(num) +1;
        int i = 2;
        while(i<limit){
            if(num%i==0){
                cout << "Composite number" << endl;
                return;
                break;
            } else{
                i++;
            }
        } 
        cout << "Prime number" << endl;
    }
}

int digit_sum(int num){
    if(num<0){
        return 0;
    } else if(num<10){
        return num;
    } else {
        int sum;
        while(num<10){
            sum += num%10;
            num = num/10; 
        }
        return sum+num;
    }
}

void multiplication_table(int num,int iteration){
    for(int i = 1;i<=iteration;i++){
        cout << num << " * " << i << " = " << num*i << endl; 
    }
}

int sum_of_series(int numbers[],int n){
    int sum = 0;
    for(int i = 0;i<n;i++){
        sum += numbers[i];
    }
    return sum;
}

int main(){
    int p_type;
    cout << "Enter problem number: ";
    cin >> p_type;
    switch(p_type){
        case 1:
            cout << "Greatest Common Divisor" << endl;
            int num1, num2;
            cout << "Enter first number: ";
            cin >> num1;
            cout << "Enter second number: ";
            cin >> num2;
            cout << "GCD = " << gcd(num1,num2) << endl;
            break;

        case 2:
            cout << "Prime number verification" << endl;
            int num;
            cout << "Enter the number: ";
            cin >> num;
            prime_number(num);
            break;
        
        case 3:
            cout << "Sum of Digits of a number" << endl;
            int x;
            cout << "Enter the number: ";
            cin >> x;
            cout << "Sum = " << digit_sum(x) << endl;
            break;
        
        case 4:
            cout << "Multiplication table" << endl;
            int y,iteration;
            cout << "Enter the number: ";
            cin >> y;
            cout << "Enter the limit of the multiplication table: ";
            cin >> iteration;
            multiplication_table(y,iteration);
            break;
        
        case 5:
            cout << "Sum of Series" << endl;
            int len;
            cout << "Enter the number of elements in the series: ";
            cin >> len;
            int list[] = {0,0,0,0,0,0,0};
            for(int i=1;i<len;i++){
                int element;
                cout << "Enter element: ";
                cin >> element;
                list[i] = element;
            }
            cout << "Sum of series = " << sum_of_series(list,len);
            break;

        default:
            cout << "Invalid problem number" << endl;
            break;
    }
    return 0;
}