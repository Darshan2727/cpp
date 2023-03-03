#include<iostream>
using namespace std;
class REPORT
{
    int adno,sum=0,i;
    char name[20];
    float marks[5];
    float average;
    float getavg()
    {
       for(i=0;i<5;i++)
        {
            sum=sum+marks[i];
        }    
        return (float)sum/5;
         
    }
    public:
    void readinfo()
    {
        cout<<"Adno:";
        cin>>adno;
        cout<<"Name:";
        cin>>name;
        for(i=0;i<5;i++)
        {
            cout<<"Enter:";
            cin>>marks[i];
        }
        average=getavg();
       
    }
    void displayinfo()
    {
        cout<<"\nAdno:"<<adno<<endl;
        cout<<"Name:"<<name<<endl;
        cout<<"Marks:"<<sum<<endl;
        cout<<"Average:"<<average;
        
    }
};
int main()
{
    REPORT a;
    a.readinfo();
    a.displayinfo();
}