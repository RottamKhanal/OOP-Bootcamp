#include <iostream>
using namespace std;

class MyClass {
public:
    // Static function
    static void displayMessage() {
        cout << "This is a static function!" << endl;
    }
};

int main() {
    // Calling static function without creating an object
    MyClass::displayMessage();
    
    return 0;
}
