#include<iostream>
using namespace std;
class Base{
    public:
    void sum(){
        cout<<"This  is a function without parameters"<<endl;
    }
    void sum(int a,int b){
        cout<<"The sum of a+b is -: "<<(a+b)<<endl;
    }
    void sum(int a,int b,int c){
                cout<<"The sum of a+b+c is -: "<<(a+b+c)<<endl;

    }
    int sum(int a,int b){
        return a+b;
    }
};

int main() {
    /* code */
    Base b;
    b.sum();
    b.sum(5,7);
    b.sum(5,5,78);
 
    return 0;
}
