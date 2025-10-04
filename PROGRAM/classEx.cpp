#include<iostream>
using namespace std;
class hello{
    public:
    void hi(){
        cout << "Hello moto";
    }
    int sum(int a,int b){
        return a + b;
    }
};
class abc:public hello{
    public:
    void print(){
        cout << "hi bhavin";
    }
};
int main(){
    hello obj1;
    obj1.hi();
    cout << endl;
    cout << obj1.sum(9,6);

    abc a;
    a.print();
    return 0;
}