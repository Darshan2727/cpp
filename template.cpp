#include<iostream>
using namespace std;
template <class T>
void display(T d)
{
    cout<<"Displaying template:"<<d<<endl;
}
template <class x,class y>
void addition(x a,y b)
{
    cout<<"Addition:"<<a+b<<endl;
}
// void Display(x a,y b)
// {
//     cout<<"Displaying template:"<<a<<"\t"<<b<<endl;
// }
int main()
{
    display(170);
    display(18.56);
    display('H');
    // Display('F',54);
    // Display(25,76);
    // Display('y',6);
    addition(56,'f');
    addition(45.56,72);
}