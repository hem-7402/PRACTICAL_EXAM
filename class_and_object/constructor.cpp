#include<iostream>
using namespace std;
class Demo{
    private:
        string name;
        int roll;
    public:
        Demo(string name,int roll){
            this->name = name;
            this->roll = roll;
        }

        void show(){
            cout << "name is : " << name << endl;
            cout << "roll is : " << roll << endl;
        }
};
int main(){
    Demo d("Bhavin",32);
    d.show();
    return 0;
}