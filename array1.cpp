#include<iostream>
using namespace std;
int main()
{
    int a[]={10,20,30,40,50},i;
    int b[]={100,200,300,400,500};
    for(i=0;i<5;i++)
    {
        cout<<"\n"<<a[i];
        cout<<"\t"<<b[i];
        cout<<"\t"<<a[i]+b[i];
    }
}