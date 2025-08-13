#include <iostream>

using namespace std;


class Item
{
    public:
    int id;
    Item(int id){
        this->id = id;
    }
};
 int main() {
    Item i1(101); 
    cout << "Item ID: " << i1.id << endl;
    return 0;
}