#include <iostream>
#include <vector>
using namespace std;
class Demo{
    public:
        int n;
        vector<int> ans;

        Demo(int n){
            this->n = n;
            this->ans = vector<int>(n,0);
        }

        void setData(){
            for(int i = 0;i < n;i++){
                cout << "Enter values : ";
                cin >> ans[i];
            }
        }

        void getDate(){
            for(int i = 0;i < n;i++){
                cout << "value is : " << ans[i] << endl;
            }
        }
};
int main() {
    Demo d(10);
    d.setData();
    d.getDate();

    return 0;
}
