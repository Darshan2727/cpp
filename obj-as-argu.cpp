#include<iostream>
using namespace std;
class test
{
    int x,y;
    public:
    void setdata(int i,int j)
    {
        x=i,y=j;
    }
    int getdata()
    {
        cout<<"Value of X:"<<x<<"\tValue of Y:"<<y<<endl;
    }
    friend test sum(test , test);
};
test sum(test a,test b)  //object as a argument
{
    test c;
    c.x=a.x+b.x;
    c.y=a.y+b.y;
    return c;  //return as a object
}
int main()
{
    test a,b,c;
    a.setdata(18,7);
    b.setdata(22,26);
    a.getdata();
    b.getdata();
    c=sum(a,b);
    c.getdata();
}