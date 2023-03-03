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
    num operator++(int)
    {
       real++;
       img++;
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
    a.setdata(3,4);
    a.getdata();
    a++;
    cout<<"After increment:"<<endl;
    a.getdata();
}