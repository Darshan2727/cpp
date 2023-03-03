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
    num operator++()
    {
      ++l;
      ++b;
      ++h;
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
    num a;
    a.setdata(5,3,7);
    a.getdata();
    ++a;
    cout<<"After Increment:"<<endl;
    a.getdata();
}