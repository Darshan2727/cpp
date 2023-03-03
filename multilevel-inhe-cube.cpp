#include <iostream>
using namespace std;
class base
{
protected:
    int a,square=1,i;

public:
    void seta(int x)
    {
        a = x;
        for(i=1;i<=a;i++)
        {
            square=square*i;
        }    
    }
};
class derived : public base
{
protected:
    int b,cube=1,j;

public:
    void setb(int y)
    {
        b = y;
        for(j=1;j<=b;j++)
        {
            cube=cube*j;
        }
    }
};
class abc : public derived
{
public:
    void get()
    {
        cout << "Cube of A:" << square << endl
             << "Cube of B:" << cube;
    }
};
int main()
{
    abc a;
    a.seta(14);
    a.setb(6);
    a.get();
}