#include<iostream>
using namespace std;
class result
{
    int science,maths,english,total,grade;
    float per;
    public:
    void sub()
    {
        cout<<"Enter science marks:";
        cin>>science;
        cout<<"Enter maths marks:";
        
        cin>>maths;
        cout<<"Enter English marks:";
        cin>>english;
        total=science+maths+english;
        per=(float)(science+maths+english)/3;
    }
    void sum()
    {
        cout<<"Science\tMaths English\tTotal\tPer\tgrade";
        cout<<"\n"<<science;
        cout<<"\t"<<maths;
        cout<<"\t"<<english;
        cout<<"\t"<<total;
        cout<<"\t"<<(float)per;
        if(science<33 || maths<33 || english<33)
        {
            cout<<"\t Fail";
        }
        else if(per>90)
        {
            cout<<"\t A+";
        }
        else if(per>80)
        {
            cout<<"\t A";
        }
        else if(per>70)
        {
            cout<<"\t B+";
        }
        else if(per>60)
        {
            cout<<"\t B";
        }
        else if(per>50)
        {
            cout<<"\t C";
        }
        else if(per>33)
        {
            cout<<"\t D";
        }
    }
};
int main()
{
    result a;
    a.sub();
    a.sum();
}