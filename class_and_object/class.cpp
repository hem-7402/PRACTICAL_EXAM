#include<iostream>
using namespace std;
class Car{
    public:
        string  modal;
        string  color;
        void setData(){
            cout << " enter car modal : " ;
            cin >> modal;
            cout << " enter car color : " ;
            cin >> color;
        }
        void getdata();
};
void Car::getdata(){
    cout << "car modal is : " << modal << endl;
    cout << "car modal is : " << color << endl;
}
int main(){
    Car start;
    start.setData();
    start.getdata();
    return 0;
}