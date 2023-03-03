#include<iostream>
using namespace std;
int main()
{
    int science,maths,english,total;
    float per;
    cout <<"science marks:";
    cin >>science;
    cout <<"maths marks:";
    cin >>maths;
    cout <<"english marks:";
    cin >>english;
    total=science+maths+english;
    cout <<"total is:"<<total;
    per=total/3;
    cout <<"\npercentage is:"<<per;
}