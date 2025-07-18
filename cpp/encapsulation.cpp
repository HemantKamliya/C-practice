#include<iostream>
using namespace std;
class Base{
    int pri_var=100;
    friend class Tech;

}; 
class Tech{
    public:
    void GetPM(Base &temp){
        cout<<"The private variable is -:"<<temp.pri_var;
    }
};
int main() {
    Base objBase;
    Tech objTech;
    objTech.GetPM(objBase);
     
    return 0;
}

