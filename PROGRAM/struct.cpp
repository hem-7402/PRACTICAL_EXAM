#include<iostream>
using namespace std;
struct sum{
    int a,b;
    string str = "bhavin";
};
int main(){
    struct sum s1;
    s1.a = 3;
    s1.b = 6;

    int a = s1.a + s1.b;
    cout << a << endl;
    cout << s1.str;
    return 0;
}