#include<iostream>
using namespace std;

class static_item
{
    static int count;
    float price;
    public:
    void getdata(float a)
    {
        price =a;
        count++;
    }
    void showcount()
    {
        cout<<"count="<<count<<endl;
    }
};
int static_item::count=0;

int main(){
    static_item a1,a2,a3;
    a1.showcount();
    a2.showcount();
    a3.showcount();
    a1.getdata(30.8);
    a2.getdata(2.5);
    a3.getdata(30.5);
    cout<<"after reading data";
    a1.showcount();
    a2.showcount();
    a3.showcount();

    
}