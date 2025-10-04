#include <iostream>
using namespace std;

class Outer {
private:
    int data = 100;   // Private member of Outer

public:
    void outerFun() {
        cout << "Outer class function, data = " << data << endl;
    }

    // Nested class
    class Inner {
    public:
        void innerFun() {
            cout << "Inner class function" << endl;
        }
    };
};

int main() {
    Outer o;          // Create object of Outer
    o.outerFun();     // Call outer function

    Outer::Inner i;   // Create object of Inner (note scope resolution)
    i.innerFun();     // Call inner function

    return 0;
}
