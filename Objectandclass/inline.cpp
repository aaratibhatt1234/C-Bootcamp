#include<iostream>
using namespace std;

inline int add(int a,int b)
{
    return(a+b);
}
int main()
{
    int p,q,r;
    cout<<"input valuesof pand q"<<endl;
    cin>>p,q;
    r=add(p,q);
    cout<<endl<<"the sum"<<r;
    return 0;
}
