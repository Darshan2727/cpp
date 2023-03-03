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
        cout << "Cube of the number is:" << a * a * a;
    }
};
int main()
{
    derived d;
    d.setdata(12);
    d.getdata();
}