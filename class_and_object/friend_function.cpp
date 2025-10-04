#include<iostream>
using namespace std;
class Employee{ 
    private:
        string company = "TCS";
        string name;
        long salary; 
    
    public:
        void getData(){
            cout << "company name is : " << company << endl;
            cout << "emp name is : " << name << endl;
            cout << "salary name is : " << salary << endl;
        }

        void setData(string name,long salary){
            this->name = name;
            this->salary = salary;
        }
    
    // friend void setData(Employee &emp,string n,long s);

    friend void emp_info(Employee emp);
};
// void setData(Employee &emp,string n,long s){
//     emp.name = n;
//     emp.salary = s;
// }

void emp_info(Employee emp){
    emp.getData();
}
int main(){
    // Employee emp;
    // setData(emp,"abc",10000);
    // emp.getData();

    Employee emp;
    emp.setData("abc",1000);

    return 0;
}

