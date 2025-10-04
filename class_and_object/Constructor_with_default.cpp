#include<iostream>
using namespace std;
class Demo{
    public:
        Demo(string name = "abc"){
            cout << "name is : " << name << endl;
        }
};
int main(){
    Demo d;
    Demo d1("Bhavin");
    return 0;
}