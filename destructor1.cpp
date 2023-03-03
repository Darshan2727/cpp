#include<iostream>
using namespace std;
class test
{
    public:
    test()
    {
        cout<<"Default constructor is called.."<<endl;
    }
    ~test()
    {
        cout<<"Destructor constructor is called.."<<endl;
    }
<<<<<<< HEAD
    test()
    {
        cout<<"Parameterized constructor is caled..a:"<<a<<endl;
    }
};
int main()
{
    test a,b(20)
=======
    test(int a)
    {
        cout<<"Parameterized constructor is caled..a:"<<a<<endl;
    }
    
};
int main()
{
    test a,b(20);
>>>>>>> 9b6b1912ec8db28ebb31a079d28db86539e1c8f6
}