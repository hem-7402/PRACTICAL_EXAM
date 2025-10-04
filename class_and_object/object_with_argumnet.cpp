#include<iostream>
using namespace std;
class Demo{
    int a;
    public:
        void setdata(int a){
            this->a = a;
        }

        void  sum(Demo a,Demo b){
            cout << a.a + b.a;
        }   
};
int main(){
    Demo a,b,c;
    a.setdata(10);
    b.setdata(20);
    c.sum(a,b);
    return 0;
}