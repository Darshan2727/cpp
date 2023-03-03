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
        cout<<"Num is:"<<r<<" / "<<i<<" i"<<endl;
    }
    friend num operator/(num,num);
};
num operator/(num a,num b)
    {
        num z;
        z.r=a.r/b.r;
        z.i=a.i/b.i;
        return z;
    }

int main()
{
    num a,b,c;
    a.setdata(27,75);
    b.setdata(3,5);
    a.getdata();
    b.getdata();
    c=a/b;
    c.getdata();
}