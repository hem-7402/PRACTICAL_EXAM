#include<iostream>
using namespace std;
class Demo{
    int a,b;
    public:
        Demo(int a,int b){
            this->a = a;
            this->b = b;
        }

        Demo(Demo &r){
            a = r.a;
            b = r.b;
        }

        void show(){
            cout << a << endl << b << endl;
        }
};
int main(){
    Demo d(3,4);
    Demo d1(d);

    d1.show();
    return 0;
}