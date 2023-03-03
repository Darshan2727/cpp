#include<iostream>
using namespace std;
int main()
{
    int a,b,sp=25;
    for(a=1;a<=5;a++)
    {
        for(b=1;b<=sp;b++)
        cout<<"  ";
        for(b=1;b<=a;b++)
        {
            cout<<"   *";
        }
        sp--;
        cout<<"\n";

    }
}