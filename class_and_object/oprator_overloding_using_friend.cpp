#include<iostream>
using namespace std;
class Demo{
    public:
        int a;

        Demo(int a){
            this->a = a;
        }
    
        friend Demo operator +(Demo d);

        void show(){
            cout << "a is : " << a << endl;
        }
};
Demo operator +(Demo d1,Demo d2){
    return Demo((d1.a+d2.a));
}
int main(){
    Demo d1(10),d2(20);
    Demo d3 = d1 + d2;
    d3.show();
    return 0;
}