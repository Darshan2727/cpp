#include<iostream>
using namespace std;
class ar
{
    public:
    
        ar(int r)
        {
            cout<<"Area of circle:"<<3.14*(r*r)<<endl;
        }
        ar(int b,int h)
        {
            cout<<"Area of Triangle:"<<0.5*b*h<<endl;
        }
        ar(double a)
        {
            cout<<"Area of square:"<<a*a<<endl;
        }
        ar(double b,double h)
        {
            cout<<"Area of ractangle:"<<b*h<<endl;
        }
    
};
int main()
{
    ar r(5),b(8,9),a(22.5),c(12.,15.);
}