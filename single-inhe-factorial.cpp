#include <iostream>
using namespace std;
class base
{
protected:
    int a, fact = 1, i;

public:
    void setdata(int x)
    {
        a = x;
        for (i = 1; i <= a; i++)
        {
            fact = fact * i;
        }
    }
};
class derived : public base
{
public:
    void getdata()
    {
        cout << "Factorial of " << a << " is: " << fact << endl;
    }
};
int main()
{
    derived d;
    d.setdata(5);
    d.getdata();
}
