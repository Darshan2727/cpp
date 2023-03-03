#include<iostream>
using namespace std;
int main()
{
    int a,b,c,d=1,sp,n;
    cout<<"Enter n:";
    cin>>n;
    sp=n-1;
    for(a=1;a<=n;a++)
    {
        for(b=1;b<=sp;b++)
        cout<<" ";
        for(b=1;b<=d;b++)
        {
            cout<<" *";
        }
        if(sp>a)
        {
            sp=sp-1;
            d=d+1;
        }
        if(sp<a+1)
        {
            sp=sp+1;
            d=d-1;
        }
        cout<<"\n";
        
    }
}