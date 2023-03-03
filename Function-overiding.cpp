#include<iostream>
using namespace std;
class base
{
    public:
    virtual void show()
    {
        cout<<"Base class show function called..."<<endl;
    }
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
    base *p,a;
    derived s;
    p= &a;
    p->show();

    p= &s;
    p->show();
}