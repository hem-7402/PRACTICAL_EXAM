#include<iostream>
using namespace std;
class Emp{
    public:
        Emp(){
            cout << "constructor overloding" << endl;
        }

        Emp(int a,int b){
            cout << "sum of : "<< a + b << endl;  
        }
};
int main(){
    Emp e,e2(30,45);
    return 0;
}
