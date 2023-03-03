#include<iostream>
using namespace std;
class ar
{
    public:
    
        void area(int r)
        {
            cout<<"Area of circle:"<<3.14*(r*r)<<endl;
        }
        void area(int b,int h)
        {
            cout<<"Area of Triangle:"<<0.5*b*h<<endl;
        }
        void area(double a)
        {
            cout<<"Area of square:"<<a*a<<endl;
        }
        void area(double b,double h)
        {
            cout<<"Area of ractangle:"<<b*h<<endl;
        }
    
};
int main()
{
    ar a;
    a.area(5);
    a.area(15,22);
    a.area(18);
    a.area(33.,27.);
}