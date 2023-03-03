#include<iostream>
using namespace std;
int main()
{
    int a[]={1,2,3,4,5,6,7,8,9},i;
    int sum=0;
    for(i=0;i<9;i++)
    {
        sum=sum+a[i];
    }
    cout<<"sum of all elements:"<<sum;
}