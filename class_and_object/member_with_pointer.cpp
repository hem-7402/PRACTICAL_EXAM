#include<iostream>
using namespace std;
class Demo{
    public:
        int a;
        void show(int x){
            cout << x << endl;
        }
};

int main(){
    int Demo::*p = &Demo::a;
    // cout << p << endl;
    Demo d;

    d.*p = 20;
    cout << d.*p << endl;
    cout << d.a << endl;

    void (Demo::*ptr)(int) = &Demo::show;
    (d.*ptr)(45);

    d.show(45);

    return 0;
}