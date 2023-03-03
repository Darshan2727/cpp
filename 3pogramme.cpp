#include<iostream>
using namespace std;
class test
{
    int testcode,nocandidate,centerreqd;
    char description[10];
    float calcntr()
    {
        return nocandidate/100+1;
    }
    public:
    void schedule()
    {
        cout<<"Enter Test qoad:";
        cin>>testcode;
        cout<<"Enter Description:";
        cin>>description;
        cout<<"Enter No candidate:";
        cin>>nocandidate;
        centerreqd=calcntr();
    }
    void disptest()
    {
        cout<<"Test code:"<<testcode<<endl;
        cout<<"Description:"<<description<<endl;
        cout<<"No candidate:"<<nocandidate<<endl;
        cout<<"Center Reqd:"<<centerreqd<<endl;
    }
};
int main()
{
    test a;
    a.schedule();
    a.disptest();
}