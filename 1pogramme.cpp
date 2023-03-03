#include<iostream>
using namespace std;
class students
{
    int admno;
    char sname[20];
    float english,maths,science,total;
    float ctotal()
    {
       return english+maths+science;
    }
    public:
    void takedata()
    {
        cout<<"Enter admno:";
        cin>>admno;
        cout<<"Enter sname:";
        cin>>sname;
        cout<<"Enter English marks:";
        cin>>english;
        cout<<"Enter Maths marks:";
        cin>>maths;
        cout<<"Enter Science marks:";
        cin>>science;
        total=ctotal ();
    }
    void showdata()
    {
        cout<<"admno:"<<admno<<endl;
        cout<<"Name:"<<sname<<endl;
        cout<<"English:"<<english<<endl;
        cout<<"Science:"<<science<<endl;
        cout<<"Maths:"<<maths<<endl;
        cout<<"Total:"<<total<<endl;
    }
};
int main()
{
    students a;
    a.takedata();
    a.showdata();
}