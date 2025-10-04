#include <iostream>
using namespace std;

class Array {
    int *arr;   // pointer
    int size;

public:
    // Dynamic Constructor
    Array(int n) {
        size = n;
        arr = new int[size];   // memory allocated
    }

    void input() {
        cout << "Enter " << size << " numbers:\n";
        for (int i = 0; i < size; i++) {
            cin >> arr[i];
        }
    }

    void display() {
        cout << "You entered: ";
        for (int i = 0; i < size; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    // Destructor
    ~Array() {
        delete[] arr;
        cout << "Memory released!\n";
    }
};

int main() {
    int n;
    cout << "Enter size: ";
    cin >> n;

    Array a(n);   // dynamic constructor runs here
    a.input();
    a.display();

    return 0;
}
