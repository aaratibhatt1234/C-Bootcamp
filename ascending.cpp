#include<iostream>
using namespace std;

int main(){
    int i,j,temp,*ptr;
    ptr=new int[5];
    cout<<"enter 5 interger.";
    for (i =0 ; i <5 ; i++)
    {
        cin>>ptr[i] ;
    }
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            if(ptr[i]<ptr[j]){
                temp=ptr[i];
                ptr[i]=ptr[j];
                ptr[j]=temp;
            }
        }
    }
    cout<<"number in ascending order are:"<<"\n";
    for(i=0;i<5;i++){
        cout<<ptr[i]<<"\n";
        }
        delete[] ptr;
        return 0;

    
}