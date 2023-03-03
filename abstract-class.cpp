#include<iostream>
using namespace std;
class base //abstract clss
{
    public:
    virtual void show() =0; //pure virtual function
    // {
    //     cout<<"Base class show function called..."<<endl;
    // }
};
class derived: public base
{
    public:
    void show()
    {
        cout<<"Derived class show function called..."<<endl;
    }
};
int main()
{
    base *p;
    derived s;

    p= &s;
    p->show();
}