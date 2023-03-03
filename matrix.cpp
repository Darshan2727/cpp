#include<iostream>
using namespace std;
int main()
{
    int a[5][5],i,j;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cout<< "Element at a[" << i << "][" << j << "]:";
            cin>>a[i][j];
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(a[i][j]!=0)
            {
             cout<<a[i][j];
            }
            else if(a[i][j]==0)
            {
             cout<<" ";
            }
        }
    cout<<"\n";
    }
}