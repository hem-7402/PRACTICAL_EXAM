#include<iostream>
using namespace std;
int sum(int a,int b = 20){
    return a + b;
}
int main(){
    cout << sum(10,20) << endl;
    cout << sum(10) << endl;
    return 0;
}