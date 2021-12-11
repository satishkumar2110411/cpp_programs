#include <iostream>
using namespace std;

class Student{
    public:
        string name = "";
        int standard = -1,roll = -1,age = -1;
        char section = ' ';
        Student(string s_name,int s_class,char s_section,int s_roll,int s_age){
            name = s_name;
            standard = s_class;
            section = s_section;
            roll = s_roll;
            age = s_age;
        }
        void get_details(int s_class,char s_section,int s_roll){
            object details[] = {name,standard,section,roll,age};
            cout << &details << endl;
        }
}


int main(){
    Student satish("S J Satish Kumar",12,'A',18,17);
    satish.get_details(12,'A',18);
    return 0;
}