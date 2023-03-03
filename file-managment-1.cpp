#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    ofstream filestream("file.txt");
    if(filestream.is_open())
    {
        filestream<<"Welcome to skillqode";
        filestream<<"\n We started new lab";
        filestream<<"\nwe started new branch";
        filestream.close();
    }
    else 
    cout<<"file opening is fail";
    return 0;
}