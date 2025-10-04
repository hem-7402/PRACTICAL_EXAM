#include<iostream>
using namespace std;
int main(){
    // using loop to print 1 to 10

    // for loop
    for(int i = 1;i <= 10;i++){
        cout << i << " ";
    } 
    cout << endl;

    // while loop
    int i = 1;
    while(i <= 10){
        cout << i << " ";
        i++;
    }
    cout << endl;

    // do while 
    int j = 1;
    do{
        cout << j << " ";
        j++;
    }while(j <= 10);
    return 0;
}