#include<iostream>
using namespace std;
class test
{
    public:
    void total(int b)
    {
        cout<<"sum"<<b+b<<endl;
    }
    void total(double b)
    {
        cout<<"min"<<b*b<<endl;
    }
};
int main()
{
    test a;
    a.total(12);
    a.total(20.5);
}