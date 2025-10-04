#include<iostream>
using namespace std;
class Car{ // member function
    public:
        string color;
        string modal;
        void setData(string color,string modal){
            this->color = color;
            this->modal = modal;
        }
        
        void show(){
            cout << "MODAL NAME IS : " << modal << endl;
            cout << "COLOR NAME IS : " << color << endl;
        }

        void start(){
            cout << "START : " << modal << endl;
            show(); // nested member function
        }

        void stope(){
            cout << "STOPE : " << modal << endl;
        }
};
class Student{
    private:
        int roll;
        string name;

        void input(){
            cout << "enter your roll number : ";
            cin >> roll;
            cout << "enter your name : " ;
            cin >> name;
        }

    public :
        void setStudentInfo(){
            input(); // nested member 
        }
        void showInfo(){
            cout << "student rollnumber is : " << this->roll << endl;
            cout << "student name is : " << this->name << endl;
        }
};
class fun{
    private:
        int sum(int x,int y){
            return x + y;
        }
    public:
        void addTowNum(int x,int y);
};
inline void fun::addTowNum(int x,int y){
    cout << sum(x,y);
}
int main(){
    // Car toyota;
    // toyota.setData("balck","fortuner");
    // toyota.show();
    // toyota.start();
    // toyota.stope();

    // Student abc;
    // abc.setStudentInfo();
    // abc.showInfo();

    fun add;
    add.addTowNum(5,6);
    return 0;
}