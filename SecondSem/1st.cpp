#include <iostream>
using namespace std;

class Person {
private:
    string name;
    int age;
public:
    // Default constructor
    Person() {
        name = "unknown";
        age = 0;
    }

    // Parameterized constructor
    Person(string n, int a) {
        name = n;
        age = a;
    }

    void display() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

int main() {
    Person p1; // Calls default constructor
    Person p2("Rottam Khanal", 19); // Calls parameterized constructor

    p1.display();
    p2.display();

    return 0;
}