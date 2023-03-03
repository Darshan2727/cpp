#include<iostream>
using namespace std;
class num
{
    int real,img;
    public:
    void setdata(int,int);
    void getdata()
    {
        cout<<"Num is:"<<real<<"+"<<img<<"i"<<endl;
    }
    num operator+(num &n)
    {
        num t;
        t.real=real+n.real;
        t.img=img+n.img;
        return t;
    }
};
void num :: setdata(int r,int i)
{
    real=r;
    img=i;
}
int main()
{
    num a,b,c;
    a.setdata(3,4);
    b.setdata(5,8);
    a.getdata();
    b.getdata();
    c=a+b;
    c.getdata();
}