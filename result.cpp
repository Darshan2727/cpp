#include<iostream>
using namespace std;
int main()
{
    int a[]={88,95,62,78,95},i,j;
    int b[]={99,98,94,92,98,94};
    int c[]={85,65,72,99,98};
    for(i=0;i<5;i++)
    {
        cout<<"\n"<<a[i];
        cout<<"\t"<<b[i];
        cout<<"\t"<<c[i];
        cout<<"\t"<<a[i]+b[i]+c[i];
        cout<<"\t"<<(float)(a[i]+b[i]+c[i])/3;
        j=(a[i]+b[i]+c[i])/3;
        if(j>90)
        {
            cout<<"\t A+";
        }
        else if(j>80)
        {
            cout<<"\t A";
        }
        else if(j>70)
        {
            cout<<"\t B+";
        }
        else if(j>60)
        {
            cout<<"\t B";
        }
        else if(j>50)
        {
            cout<<"\t C";
        }
        else if(j<33)
        {
            cout<<"\t Fail";
        }
    }
}