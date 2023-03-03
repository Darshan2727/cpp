#include<iostream>
using namespace std;
class result
{
    public:
    int science,maths,english,total;
    char grade,Fail;
    float per;
    result()
    {
        cout<<"Enter science marks:";
        cin>>science;
        cout<<"Enter Maths marks:";
        cin>>maths;
        cout<<"Enter English marks:";
        cin>>english;
    }
    void calc()
    {
        total=science+maths+english;
        per=(float)total/3;
    }
    void pri()
    {
        cout<<"Science"<<"\tMaths"<<"\tEnglish"<<"\ttotal"<<"\tper"<<"\tgrade";
        cout<<"\n"<<science<<"\t"<<maths<<"\t"<<english<<"\t"<<total<<"\t"<<(float)per;
        if(science<33 || maths<33 || english<33)
        {
            cout<<"\tFail";
        }
        else if(per>90)
        {
            cout<<"\tA+";
        }
        else if(per>80)
        {
            cout<<"\tA";
        }
        else if(per>70)
        {
            cout<<"\tB+";
        }
        else if(per>60)
        {
            cout<<"\tB";
        }
        else if(per>50)
        {
            cout<<"\tC";
        }
        else if(per>33)
        {
            cout<<"\tD";
        }
    }
};
int main()
{
    result a;
    a.calc();
    a.pri();
}