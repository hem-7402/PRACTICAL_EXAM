#include<iostream>
using namespace std;
// single inheritance
class Animal{
    public:
        void Sound(){
            cout << "Animal make sound" << endl;
        }

        void Eat(){
            cout << "Animal is eat" << endl;
        }
};

class Dog:public Animal{
    public:
        void loyal(){
            cout << "Dog is loyal" << endl;
        }
};

// mutiple inheritance 
class Demo{
    public:
        void mainClass(){
            cout << "this is main class" << endl;
        }
};
class demo{
    public:
        void secondClass(){
            cout << "second class" << endl;
        }
};

class other:public demo,public Demo{
    public:
        void thirdClass(){
            cout << "third class" << endl;
        }
};
int main(){
    Dog d;
    d.Sound();
    d.Eat();
    d.loyal();

    cout << endl;

    other o;
    o.mainClass();
    o.secondClass();
    o.thirdClass();
    return 0;
}