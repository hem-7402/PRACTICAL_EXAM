#include<iostream>
using namespace std;
class Demo{
    public:
        Demo(){
            cout << "Hello" << endl;
        }

        ~Demo(){
            cout << "by" << endl;
        }
};
int main(){
    Demo d;
    return 0;
}