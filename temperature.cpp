#include<iostream>
using namespace std;
int main()
{
    int celsius;
    float fahrenheit;
    cout<<"Celsius:";
    cin>>celsius;
    fahrenheit=(float)(celsius*9/5)+32;
    cout<<"Fahrenheit:"<<(float)fahrenheit;
}