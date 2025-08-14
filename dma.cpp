#include<iostream>
using namespace std;

int main(){
    int*pa,*pb,*psum;
    pa=new int;
    pb=new int;
    psum=new int;
    cout<<"Enter two number:";
    cin>>*pa>>*pb;
    *psum=*pa+*pb;
    cout<<"The sum="<<*psum;
    delete pa;
    delete pb;
    return 0;
}
