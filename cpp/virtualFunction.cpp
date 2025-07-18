#include<iostream>
using namespace std;
class Base{
    public:
    void func(){
        cout<<"This is a base classs function called without virtual keyword\n";
    }
    virtual void func2(){
        cout<<"This is a base class function called with virtual keyword\n";
    }

};
class Derived:public Base{
       void func(){
        cout<<"This is a derived class  classs function called without virtual function\n";
    }
     void func2(){
        cout<<"This is a derived class function called with virtual keyword\n";
    }
};
int main() {
     Base *objB;
     Derived d1;
     objB=&d1;
     objB->func();
     objB->func2();
    return 0;
}
