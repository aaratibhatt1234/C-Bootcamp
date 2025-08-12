#include <iostream>
using namespace std;

class Animal {
public:
    void sound() {
        cout << "Animal makes a sound" << endl;
    }
};

int main() {
    Animal a;
    a.sound();

    return 0;
}