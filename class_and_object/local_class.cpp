#include<iostream>
using namespace std;
void fun(){
    class Car{
    public:
        void hello(){
            cout << "Hello";
        }
    };
    Car toyota;
    toyota.hello();
}
int main(){
    fun();
    return 0;
}