// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

class box{
    private:
    int length=10;
    public:
    friend void showLength(box);
    };
    void showLength(box mybox){
        cout <<"length of box:"<<mybox.length<<endl;
    }

int main(){
box mybox;
 showLength(mybox);
return 0;
}
