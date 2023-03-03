#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Before swaping";
    cout<<"\nenter A:";
    cin>>a;
    cout<<"enter B:";
    cin>>b;
    cout<<"\nafter swaping";
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<"\nA:"<<a;
    cout<<"\nB:"<<b;
}    