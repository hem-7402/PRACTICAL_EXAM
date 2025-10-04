#include<iostream>
using namespace std;
class Student{
    public:
        string name[5];
        int roll[5]; // roll number store

        void InsertStudentRoll(){
            for(int i = 0;i < 5;i++){
                cout << "enter your roll : ";
                cin >> roll[i];
                cout << "enter your name : ";
                cin >> name[i];
            }
            cout << endl;
        }

        void ShowStudentRoll(){
            for(int i = 0;i < 5;i++){
                cout << "roll is : " << roll[i] << endl;
                cout << "name is : " << name[i] << endl;
            }
        }
};
int main(){
    Student s1;
    s1.InsertStudentRoll();
    s1.ShowStudentRoll();
    return 0;
}