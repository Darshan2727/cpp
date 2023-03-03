<<<<<<< HEAD
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
        if(r<i)
        {
            cout<<"Largest Number is I"<<endl;
        }
        else 
        {
            cout<<"Largerst number is R"<<endl;
        }
    }
    friend num operator++(num);
};
num operator++(num x)
{
    num z;
    z.r=++x.r;
    z.i=++x.i;
    return z;
}
int main()
{
    num a,b;
    a.setdata(54,45);
    a.getdata();
    // b=++a;
    // cout<<"After increment:"<<endl;
    // b.getdata();
=======
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
        if(r<i)
        {
            cout<<"Largest Number is I"<<endl;
        }
        else 
        {
            cout<<"Largerst number is R"<<endl;
        }
    }
    friend num operator++(num);
};
num operator++(num x)
{
    num z;
    z.r=++x.r;
    z.i=++x.i;
    return z;
}
int main()
{
    num a,b;
    a.setdata(54,45);
    a.getdata();
    // b=++a;
    // cout<<"After increment:"<<endl;
    // b.getdata();
>>>>>>> 732056248a51e04915cf516034254a0d66422da8
}