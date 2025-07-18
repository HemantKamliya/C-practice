#include<iostream>
using namespace std;
class student{
    public:
    static int sum(int a,int b){
        return a+b;
    }
};
int main(){
  cout<<"Hello World!\n";
//   calling with object 
// student s1;
//   cout<<"The sum is -: "<<s1.sum(5,10);
// calling without object 
cout<<"The sum is -: "<<student::sum(5,10);
    return 0;
}