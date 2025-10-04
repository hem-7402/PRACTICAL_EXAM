#include<iostream>
using namespace std;
class Demo{
    int x;
    public:
        void setData(int x){
            this->x = x;
        }

        int getData() const{
            return x;
        }
};
int main(){
    Demo d;
    d.setData(10);
    cout << d.getData() << endl;
    return 0;
}