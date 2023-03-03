#include<iostream>
using namespace std;
int main()
{
    int a[10],i;
    int even=0,odd=0;
    for(i=1;i<10;i++)
    {
        cout<<"Enter a[%d]:";
        cin>>a[i];
    }
    for(i=1;i<10;i++)
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
    cout<<"sum of even position:"<<even;
    cout<<"\nsum of odd position:"<<odd;
}