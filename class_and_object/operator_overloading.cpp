#include<iostream>
using namespace std;
class Demo{
    int a,b;
    public:
        Demo(int a,int b){
            this->a = a;
            this->b = b; 
        }
        
        //  binary operators 

        Demo operator + (Demo d1){
            return Demo(a + d1.a,b + d1.b);
        }

        Demo operator - (Demo d1){
            return Demo(a - d1.a,b - d1.b);
        }

        Demo operator * (Demo d1){
            return Demo(a * d1.a,b * d1.b);
        }

        Demo operator / (Demo d1){
            return Demo(a / d1.a,b / d1.b);
        }

        void show(){
            cout << "a is : " << a << endl;
            cout << "b is : " << b << endl;
        }
};
int main(){
    Demo d1(10,20);
    Demo d2(30,40);

    Demo d3 = d1 + d2;
    d3.show();

    Demo d4 = d1 * d2;
    d4.show();

    Demo d5 = d1 - d2;
    d5.show();

    Demo d6 = d1 / d2;
    d6.show();

    return 0;
}