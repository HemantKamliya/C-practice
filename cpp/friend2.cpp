#include<iostream>
using namespace std;
class Base;
class Tech{
    public:
 void FriendClsFun(Base &temp);
};
class Base{
   int pri_var=100;
   public:
   friend void Tech::FriendClsFun(Base &);
};
void Tech::FriendClsFun(Base &temp){
cout<<"The value is : "<<temp.pri_var;
}
int main() {
    Base obj1;
    Tech obj2;
    obj2.FriendClsFun(obj1);
    return 0;
}
