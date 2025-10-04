#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;
bool primeNum(int n){
    if(n <= 1){
        return false;
    }

    for(int i = 2;i <= sqrt(n);i++){
        if(n % i == 0){
            return false;
        }
    }

    return true;
}
int main(){
    // int n = 100;

    // for(int i = 2;i < n;i++){
    //     int count = 0;
    //     for(int j = 1;j < n;j++){
    //         if(i % j == 0){
    //             count++;
    //         }
    //     }

    //     if(count == 2){
    //         cout << i << " ";
    //     }
    // }

    // cout << primeNum(10);

    if(primeNum(7)){
        cout << "number is prime";
    } else{
        cout << "number is not prime";
    }
    return 0;
}