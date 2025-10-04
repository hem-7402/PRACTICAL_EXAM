#include<iostream>
#include<string>

using namespace std;
class Demo{
    string s1,s2;

    public:
        Demo(string s1 = "",string s2 = ""){
            this->s1 = s1;
            this->s2 = s2;
        }

        void show(){
            cout << s1 << endl;
        }
        
        void operator +(){
            s1 += s2;
        }
        
        Demo operator+(Demo d1){
            return Demo(s1+d1.s1,s2+d1.s2);
        }

        void display(){
            cout << s1 << endl;
            cout << s2 << endl;
        }
    };
int main(){
    Demo d("Hello ","World");
    d.show();
    +d;
    d.show();


    Demo d1("abc","bca");
    Demo d2("cba","abc");

    Demo d3 = d1 + d2;
    d3.display();

    return 0;
}