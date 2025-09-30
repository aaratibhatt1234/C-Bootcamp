#include<iostream>
using namespace std;

inline int add(int a,int b){
    return(a+b);
};

int main()
{
    int p,q,r;
    cout<<"Input value of p and q"<<endl;
    cin>>p>>q;
    r=add(p,q);
    cout<<endl<<"The sum="<<r;
    return 0;
}

