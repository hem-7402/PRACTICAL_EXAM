#include<iostream>
using namespace std;
void swap(int* a,int* b){
    int temp = *b;
    *b = *a;
    *a = temp;
}
int main(){
    int a = 10,b = 20;
    cout << "a is : " << a << endl;
    cout << "b is : " << b << endl;

    swap(&a,&b);

    cout << "a is : " << a << endl;
    cout << "b is : " << b << endl;
    return 0;
}