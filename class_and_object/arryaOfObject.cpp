#include<iostream>
using namespace std;
class Employee{
    string name;
    long salary; 
    public:
        void setEmployeeInfo(string name,long salary){
            this->name = name;
            this->salary = salary;
        }

        void GetEmployeeInfo(){
            cout << "name of employee : " << this->name << endl;
            cout << "salary of employee : " << this->salary << endl;
        }
};
int main(){
    Employee emp[2];
    emp[0].setEmployeeInfo("abc",1000);
    emp[0].GetEmployeeInfo();
    cout << endl;
    emp[1].setEmployeeInfo("xyz",1000);
    emp[1].GetEmployeeInfo();
    return 0;
}