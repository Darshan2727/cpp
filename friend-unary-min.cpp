#include<iostream>
using namespace std;
class num
{
    int r,i;
    public:
    void setdata(int x,int y)
    {
        r=x,i=y;
    }
    void getdata()
    {
        cout<<"Num is:"<<r<<"-"<<i<<"i"<<endl;
    }
    friend num operator--(num);
};
num operator--(num x)
{
    num z;
    z.r=--x.r;
    z.i=--x.i;
    return z;
}
int main()
{
    num a,b;
    a.setdata(34,45);
    a.getdata();
    b=--a;
    cout<<"After increment:"<<endl;
    b.getdata();
}