#include<iostream>
using namespace std;
class calc
{
    int n,i;
    public:
    void amount()
    {
        cout<<"Enter n:";
        cin>>n;
        cout<<"Enter i:";
        cin>>i;
    }
    void multiplication()
    {
        cout<<"\nMultiplication:"<<n*i;
    }
    void division()
    {
        cout<<"\nDivision:"<<(float)n/i;
    }
    void substraction()
    {
        cout<<"\nSubstaraction:"<<n-i;
    }
    void addition()
    {
        cout<<"\nDivision:"<<n+i;
    }
};
int main()
{
   calc a;
   a.amount();
   a.multiplication();
   a.division();
   a.substraction(); 
   a.addition();  
}