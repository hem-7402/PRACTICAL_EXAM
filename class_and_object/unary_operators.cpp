#include<iostream>
using namespace std;
class Demo{
    int a;
    public:
        Demo(int a){
            this->a = a;
        }
        
        //  binary operators 

        Demo operator -(){
            a = -a;
        }

        Demo operator --(){
            a = --a;
        }

        Demo operator +(){
            a = +a;
        }

        Demo operator ++(){
            a = ++a;
        }

        void show(){
            cout << "a is : " << a << endl;
        }
};
int main(){
    Demo d1(10);
    -d1;
    d1.show();

    Demo d2(10);
    --d2;
    d2.show();

    Demo d3(-10);
    +d3;
    d3.show();

    Demo d4(10);
    ++d4;
    d4.show();

    return 0;
}