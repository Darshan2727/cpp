#include<iostream>
using namespace std;
class test1
{
    public:
    void test()
    {
        cout<<"Default is called..."<<endl;
    }
    void test(int a)
    {
        cout<<"parameterized constructor is called..."<<a<<endl;
    }
    void test(int a,int b)
    {
        cout<<"two parameterized constructor is called..."<<a<<"and"<<b<<endl;
    }
    void test(char a)
    {
        cout<<"one char constructor is called..."<<a<<endl;
    }
    void test(double a)
    {
        cout<<"double is called..."<<a<<endl;
    }
};
int main()
{
    test1 a;
    a.test();
    a.test(6,7);
    a.test(10.73);
    a.test('J');
}