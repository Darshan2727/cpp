#include<iostream>
using namespace std;
class box
{
    int l,h;
    public:
    void set(int a,int b)
    {
        l=a,h=b;
    }
    int get()
    {
        cout<<"Division is:"<<(float)l/h<<endl;
    }
};
int main()
{
    box a[3];
    int i,x,y;
    for(i=0;i<3;i++)
    {
        cout<<"Insert data:"<<i+1<<endl;
        cout<<"Enter X and Y:";
        cin>>x>>y;
        a[i].set(x,y);
    }
    for(i=0;i<3;i++)
    {
        cout<<"Output Data:"<<i+1<<endl;
        a[i].get();
    }
}
//