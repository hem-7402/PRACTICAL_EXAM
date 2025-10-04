#include<iostream>
using namespace std;
int main(){
    for(int i = 0;i <= 5;i++){
        for(int j = 1;j <= i;j++){
            if(j % 2 == 0){
                cout << j;
            } else{
                cout << "*";
            }
        }
        cout << endl;
    }
}
