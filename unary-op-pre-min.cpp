#include<iostream>
using namespace std;
class num
{
    int real,img;
    public:
    void setdata(int,int);
    void getdata()
    {
        cout<<"Num is:"<<real<<"-"<<img<<"i"<<endl;
    }
    num operator--()
    {
       --real;
       --img;
    }
};
void num :: setdata(int r,int i)
{
    real=r;
    img=i;
}
int main()
{
    num a;
    a.setdata(12,18);
    a.getdata();
    --a;
    cout<<"After decriement:"<<endl;
    a.getdata();
}