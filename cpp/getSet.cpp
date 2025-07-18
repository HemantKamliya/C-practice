#include<iostream>
using namespace std;
class demo{
    int x,y;
    public:
    int setMethod(int a,int b){
     x=a;
     y=b;
    }
    int getMethod(int a,int b){
   cout<<"The value of x is : "<<x<<endl;
   cout<<"The value of y is : "<<y<<endl;
    }
};
int main() {
     demo obj;
     obj.setMethod(10,20);
     obj.getMethod(10,20);
    return 0;
}
