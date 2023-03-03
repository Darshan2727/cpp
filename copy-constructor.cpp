#include<iostream>
using namespace std;
class test
{
    private:
    int age;
    public:
    test(int n)
    {
        age=n;
        cout<<"Age is:"<<age<<endl;
    }
    test(test &a)
    {
        age=a.age;
        cout<<"New age is:"<<age<<endl;
    }
};
int main()
{
    test t1(20);
    test t2(t1);
}