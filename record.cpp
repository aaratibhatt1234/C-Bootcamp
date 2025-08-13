#include<iostream>
using namespace std;

class student{
    private:
    char name[20];
    int roll;
    float marks;
    public:
    int age;
    void enter(){
        cout<<"Enter name:"<<endl;
        cin>>name;
        cout<<"Enter roll:"<<endl;
        cin>>roll;
        cout<<"Enter marks:"<<endl;
        cin>>marks;
    }
    void input(){
        cout<<"Enter name,roll,marks,age\n"<<endl;
        cin>>name,roll,marks,age;
    }
    void display(){
        cout<<"Name:"<<name<<"\nRoll:"<<roll<<"\nMarks:"<<marks<<"\nAge"<<age<<endl;
    }
};
int main(){
    student Aarati,Jatin;
    Aarati.input();
    Aarati.display();
    Aarati.enter();
    Jatin.input();
    Jatin.display();
    Jatin.enter();
}