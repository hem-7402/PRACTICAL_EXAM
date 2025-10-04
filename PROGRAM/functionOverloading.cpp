#include<iostream>
using namespace std;
int sum(int a,int b){
    return a + b;
}
int sum(int a,int b,int c){
    return a + b + c;
}
int sum(int a,float b){
    return a + b;
} 
int main(){
    cout << sum(10, 20) << endl;      
    cout << sum(10, 20, 30) << endl;  
    cout << sum(10, 2.5f) << endl;     
    return 0;
}