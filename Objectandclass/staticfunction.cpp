#include<iostream>
using namespace std;

class BCT{
    int code;
    static int count;
    public:
    void setcode(){
        count++;
        code=count;
    }
    void showcode(){
        cout<<"Student code="<<code<<"/BCT080"<<endl;
    }
    static void showcount(){
        cout<<"Records of"<<count<<"student found"<<endl;
    }
};
int BCT::count;

int main()
{
    BCT S1,S2;
    S1.setcode();
    S2.setcode();
    BCT::showcount();
    BCT S3;
    S3.setcode();
    BCT::showcount();
    S1.showcode();
    S2.showcode();
    S3.showcode();
    return 0;


}