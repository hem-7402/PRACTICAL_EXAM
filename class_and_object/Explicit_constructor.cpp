#include<iostream>
using namespace std;
class Emp{
    public:
        int a;

    Emp(int a){
        this->a = a;
    }

    void show(){
        cout << a << endl;
    }
};
int main(){
    Emp e = Emp(10);
    e.show();

    Emp e1 = 60;
    e1.show();

    Emp e2(40);
    e2.show();
    return 0;
}