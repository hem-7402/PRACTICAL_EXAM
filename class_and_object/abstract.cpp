#include<iostream>
using namespace std;
class A{
    public:
        int a;
        A(int a){
            cout << "class a: " << a << endl;
        }
};
class B{
    public:
        int b;
        B(int b){
            cout << "class b: " << b << endl;
        }
};

class C:public A,public B{
    public:
        C(int x,int y):A(x),B(y){
            cout << "class C constructed" << endl;
        }
};
int main(){
    C obj(10,20);
    return 0;
}