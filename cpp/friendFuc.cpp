#include<iostream>
using namespace std;
class FriendCls{
    int pri_var=10;
    public:
    friend void fun(FriendCls &temp);
};
void fun(FriendCls &temp){
cout<<"The private variable of friend is -: "<<temp.pri_var<<endl;
}
int main() {
     FriendCls obj;
     fun(obj);
    return 0;
}
