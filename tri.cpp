#include<iostream>
using namespace std;
int main()
{
    int a[5][5],i,j,sum1=0,sum2=0,sum3=0,x,y;
    cout<<"Enter row:";
    cin>>x;
    cout<<"Enter colum:";
    cin>>y;
    for(i=0;i<x;i++)
    {
        for(j=0;j<y;j++)
        {
            cout<<"Enter a[" << i << "][" << j << "]:";
            cin>>a[i][j];
        }
    }
    for(i=0;i<x;i++)
    {
        for(j=0;j<y;j++)
        {
            cout<<a[i][j];
        }
        cout<<"\n";
    }
    for(i=0;i<x;i++)
    {
        for(j=0;j<y;j++)
        {
            if(i<j)
            {
                sum1=sum1+a[i][j];
            }
            else if(i>j)
            {
                sum2=sum2+a[i][j];
            }
            else
            {
                sum3=sum3+a[i][j];
            }
        }
    }
    cout<<"\nSum of diafgonal:"<<sum3;
    cout<<"\nSum of upper triangle:"<<sum1;
    cout<<"\nSum of lower triangle:"<<sum2;

}