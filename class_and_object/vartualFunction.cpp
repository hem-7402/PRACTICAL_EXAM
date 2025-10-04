#include<iostream>
using namespace std;
class A{
    public:
        virtual void show() = 0;
};

class B:public A{
    public:
        void show(){
            cout << "this is class" << endl;
        }
};

int main(){
    B b;
    b.show();
    return 0;
}