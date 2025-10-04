#include<iostream>
using namespace std;
int main(){
    int p,n,r;
    cout << "enter Principal  : ";
    cin >> p;
    cout << "enter Rate : ";
    cin >> r;
    cout << "enter Time : ";
    cin >> n;
    int simpleInstrast = (p * r * n) / 100;
    cout << "simple instrast : " << simpleInstrast;
    return 0;

// enter Principal  : 100000
// enter Rate : 6
// enter Time : 5
// simple instrast : 30000
}