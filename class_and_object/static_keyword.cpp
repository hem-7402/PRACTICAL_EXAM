#include<iostream>
using namespace std;
class demo{
    static int a;

    public:
        void increment(){
            a++;
            cout << "value of a : " << a << endl;
        }  
};
int demo::a;

class demo2{
    public:
        static void showData();
};
void demo2::showData(){
    cout << "Static Member Function" << endl;
}
int main(){
    demo d;
    d.increment();
    d.increment();
    d.increment();
    d.increment();

    
    // Static Member Function
    demo2 D;
    D.showData();
    return 0;
}