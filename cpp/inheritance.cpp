#include<iostream>
using namespace std;
 class Base{
    public:
    Base(){
        cout<<"Base class constructor"<<endl;
    }
 };
 class child:public Base{
   public:
   child(){
    cout<<"Child class contructor";
   }
 };
int main()
{ 
    child obj;
 
    return 0;
}