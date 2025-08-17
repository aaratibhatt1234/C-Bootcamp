#include<iostream>
using namespace std;
class student{
    public:
    char name[20];
    int roll;
    float marks;
    public:
    void input(){
        cin>>name>>roll>>marks;
}
    void display(){
        cout<<name<<roll<<marks;
    }
};
int main(){
    student s1,s2;
    s1.input();
    s1.display();
    s2.input();
    s2.display();

}

