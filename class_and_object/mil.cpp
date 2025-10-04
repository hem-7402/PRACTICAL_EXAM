#include<iostream>
using namespace std;
class Student{
    int roll;
    string name;
    public:
        Student(int r,string n):roll(r),name(n){}
        void show(){
            cout << "name is : " << name << endl;
            cout << "roll is : " << roll << endl;
        }
};
int main(){
    Student s(12,"abc");
    s.show();
    return 0;
}