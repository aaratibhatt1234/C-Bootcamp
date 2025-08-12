#include<iostream>
using namespace std;

class student {
    char name[20];
    float marks;

public:
    void display() {
        cout << "hi" << endl;
    }
    void setMarks(float m) {
        marks = m;
    }
    float getMarks() {
        return marks;
    }
};

int add(int a, int b) {
    return(a + b);
}

int main() {
    int p, q, r;
    cin >> p >> q;
    r = add(p, q);
    cout << r << endl;

    student s; // Create an instance of the student class
    s.display(); // Call the display method
    s.setMarks(25); // Set marks using the setter
    cout << "Marks: " << s.getMarks() << endl; // Display marks to verify

    return 0;
}
