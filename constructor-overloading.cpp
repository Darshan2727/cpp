#include<iostream>
using namespace std;
class over
{
    public:
    over()
    {
        cout<<"Default constructor is called..."<<endl;
    }
    over(int a)
    {
        cout<<"parameterized constructor is called..."<<a<<endl;
    }
    over(int a,int b)
    {
        cout<<"two parameterized constructor is called..."<<a<<"and"<<b<<endl;
    }
    over(char a)
    {
        cout<<"one char constructor is called..."<<a<<endl;
    }
};
int main()
{
    over a(9),b(3,8),c('F'),d;
}