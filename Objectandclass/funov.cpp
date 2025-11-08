#include<iostream>
using namespace std;

float volume(float);
float volume(int, float);
float volume(float,float,float);

int main()
{
    float l,b,h,s;
    int r;
    cin>>l,b,h,r,s;
    cout<<"volume of cylinder"<<volume(r,h);
    cout<<"volume of cube"<<volume(s);
    cout<<"volume of rect. box"<<volume(l,b,h);

}
float volume(int r,float h){
    float v=3.14*r*r*h;
    return v;

}
float volume(float s){
    float v=s*s*s*s;
    return v;
}
float volume(float l,float b,float h){
    float v=l*b*h;
    return v;
}
