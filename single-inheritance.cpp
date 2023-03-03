#include <iostream>
using namespace std;
class base
{
protected:
    int a;

public:
    void setdata(int x)
    {
        a = x;
    }
};
class derived : public base
{
public:
    void getdata()
    {
        cout << "Value of a is:" << a;
    }
};
int main()
{
    derived d;
    d.setdata(22);
    d.getdata();
}