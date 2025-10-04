#include<iostream>
using namespace std;
inline int sum(int a,int b){
    return a + b;
}

int mal(int a,int b){
    return a * b;
}

int main(){
    cout << sum(5,6) << endl;
    cout << mal(5,6);
    return 0;
}