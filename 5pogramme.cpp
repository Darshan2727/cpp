#include<iostream>
using namespace std;
class BOOK
{
    int bookno,total_cost;
    char booktitle[20];
    float price;
    float totalcost()
    {
        total_cost=bookno*price;
    }
    public:
    void input()
    {
        cout<<"Book Number:";
        cin>>bookno;
        cout<<"Book title:";
        cin>>booktitle;
        cout<<"Price:";
        cin>>price;
    }
    void purchase()
    {
        cout<<"\nBook Number:"<<bookno<<endl;
        cout<<"Book Title:"<<booktitle<<endl;
        cout<<"Book price:"<<price<<endl;
        totalcost();
        cout<<"Total cost:"<<total_cost;
    }
};
int main()
{
    BOOK a;
    a.input();
    a.purchase();
}