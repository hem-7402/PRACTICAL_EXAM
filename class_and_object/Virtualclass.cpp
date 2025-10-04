#include<iostream>
using namespace std;
class Demo{
    public:
        void first(){
            cout << "first class" << endl;
        }
};

class demo1:virtual public Demo{
    public:
        void second(){
            cout << "second class" << endl;
        }
};

class demo2:virtual public Demo{
    public:
        void third(){
            cout << "third class" << endl;
        }
};

class DEMO:public demo1,public demo2{
    public:
        void four(){
            cout << "four class" << endl;
        }
};
int main(){
    DEMO d;
    d.first();
    d.second();
    d.third();
    d.four();
    return 0;
}