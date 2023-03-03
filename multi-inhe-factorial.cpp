#include <iostream>
using namespace std;
class base1
{
protected:
    int x, fact = 1, i;

public:
    void setx(int a)
    {
        x = a;
        for (i = 1; i <= x; i++)
        {
            fact = fact * i;
        }
    }
};
class base2
{
protected:
    int y, fact1 = 1, j;

public:
    void sety(int a)
    {
        y = a;
        for (j = 1; j <= y; j++)
        {
            fact1 = fact1 * j;
        }
    }
};
class derived : public base1, public base2
{
public:
    void get()
    {
        cout << "Factorial of X:" << fact << "\nFactorial of Y:" << fact1;
    }
};
int main()
{
    derived a;
    a.setx(9);
    a.sety(11);
    a.get();
}