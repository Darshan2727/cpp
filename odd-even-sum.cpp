#include<iostream>
using namespace std;
int main()
{
    int a[]={1,2,3,4,5,6,7,8,9},i;
    int even=0,odd=0;
    for(i=0;i<9;i++)
    {
        if(a[i]%2==0)
        {
            even=even+a[i];
        }
        else if(a[i]%2!=0)
        {
            odd=odd+a[i];
        }
    }
    cout<<"sum of even:"<<even;
    cout<<"\nsum of odd:"<<odd;
}