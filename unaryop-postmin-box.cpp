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
    num operator--(int)
    {
      l--;
      b--;
      h--;
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
    a.setdata(11,9,13);
    a.getdata();
    a--;
    cout<<"After Decrement:"<<endl;
    a.getdata();
}