#include<iostream>
using namespace std;
int main()
{
    int feet,inches;
    float centimeter;
    cout <<"Feet:";
    cin >>feet;
    inches=feet*12;
    cout <<"Inches:"<<inches;
    centimeter=inches*2.54;
    cout <<"\nCentimeter:"<<centimeter;
}