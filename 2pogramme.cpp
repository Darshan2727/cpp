#include<iostream>
using namespace std;
class batsman
{
    int bcode,innings,notout,runs,batavg;
    char bname[20];
    float calcavg()
    {
       batavg= runs/(innings-notout);
    }
    public:
    void readdata()
    {
        cout<<"Enter bcode:";
        cin>>bcode;
        cout<<"Enter name:";
        cin>>bname;
        cout<<"Enter Innings:";
        cin>>innings;
        cout<<"Enter Notout:";
        cin>>notout;
        cout<<"Enter Runs:";
        cin>>runs;
        calcavg();
    }
    // void calcavg()
    // {
    //      cout<<batavg;
    // }
    void displaydata()
    {
        cout<<"Bcode:"<<bcode<<endl;
        cout<<"Bname:"<<bname<<endl;
        cout<<"Innings:"<<innings<<endl;
        cout<<"Notout:"<<notout<<endl;
        cout<<"Runs:"<<runs<<endl;
        cout<<"Batavg:"<<(float)batavg<<endl;
    }
};
int main()
{
    batsman a;
    a.readdata();
    
    a.displaydata();
}
