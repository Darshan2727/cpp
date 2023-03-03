#include<iostream>
using namespace std;
class bank
{
    int bal;
    string name;
    string atype;
    public:
    void setdata(string name,string atype,int bal)
    {
        this->name=name;
        this->atype=atype;
        this->bal=bal;
    }
    void getdata()
    {
        cout<<"Your name:"<<name<<endl;
        cout<<"Your Balance:"<<bal<<endl;
        cout<<"Your Account type:"<<atype<<endl; 
    }
};
int main()
{
    bank b;
    b.setdata("Darshan","Current",1500000);
    b.getdata();
}