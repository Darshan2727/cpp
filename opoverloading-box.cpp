#include<iostream>
using namespace std;
class num
{
    int l,b,h;
    public:
    void setdata(int,int,int);
    void getdata()
    {
        cout<<"volume is:"<<l*b*h<<endl;
    }
    num operator*(num &n)
    {
        num t;
       t.l=l*n.l;
       t.b=b*n.b;
       t.h=h*n.h;
        return t;
    }
};
void num :: setdata(int len,int bre,int hei)
{
    l=len;
    b=bre;
    h=hei;
}
int main()
{
    num a,b,c,d;
    a.setdata(2,3,4);
    b.setdata(6,5,4);
    a.getdata();
    b.getdata();
    d=a*b;
    d.getdata();
}