#include<iostream>
using namespace std;
class shape
{
    public:
    void sh(int a)
    {
        cout<<"volume of Square:"<<a*a*a<<endl;
    }
    void sh(int r,int h)
    {
        cout<<"volume of cylinder:"<<(float)3.14*(r*r)*h<<endl;
    }
    void sh(int l,int w,int h)
    {
        cout<<"volume of Ractngle:"<<(float)l*w*h<<endl;
    }
    void sh(double b,double h)
    {
        cout<<"volume of prism:"<<b*h<<endl;
    }
};
int main()
{
    shape a;
    a.sh(12);
    a.sh(13,16);
    a.sh(23,18.5,25);
    a.sh(22.,16.);
    
}