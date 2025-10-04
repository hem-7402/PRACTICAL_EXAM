#include <iostream>
using namespace std;

class Student {
    string name;
    int age;

public:
    // Parameterized constructor
    Student(string n, int a) {
        name = n;
        age = a;
    }

    void display() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

int main() {
    string n;
    int a;

    cout << "Enter name: ";
    cin >> n;
    cout << "Enter age: ";
    cin >> a;

    // Dynamic initialization at runtime
    Student s(n, a);
    s.display();

    return 0;
}
