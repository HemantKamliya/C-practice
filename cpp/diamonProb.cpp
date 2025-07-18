#include<iostream>
using namespace std;
class Base{
         public:
    void function(){
        cout<<"Hello Base!"<<endl;
    }
};
class IM1 : public virtual Base{
    public:
    void intro(){
        cout<<"Nothing IM1"<<endl;
    }
};
class IM2 : public virtual Base{
    public:
    void intro(){
        cout<<"Nothing IM2"<<endl;
    }
};
class Child:public virtual IM1,IM2{
    public:
    void intro(){
        cout<<"Its a child class function"<<endl;
    }

};

int main() {
    /* code */
    Base b1;
    b1.function();

    return 0;
}
