#include<iostream>
using namespace std;
class plane
{
    int flightnum;
    char destination[100];
    float distance,fuel;
    float calfuel()
    {
        if(distance<=1000)
        {
            fuel=500;
        } 
        else if(distance>1000 && distance<=2000)
        {
            fuel=1100;
        }
        else if(distance>2000)
        {
            fuel=2200;
        }
    }
    public:
    void feedinfo()
    {
        cout<<"Flight Number:";
        cin>>flightnum;
        cout<<"Destination:";
        cin>>destination;
        cout<<"Distance:";
        cin>>distance;
        calfuel();
    }
    void showinfo()
    {
        cout<<"\nFlight Number:"<<flightnum<<endl;
        cout<<"Destination:"<<destination<<endl;
        cout<<"Distance:"<<distance<<endl; 
        cout<<"Consumed Fuel:"<<fuel; 
    }
};
int main()
{
    plane a;
    a.feedinfo();
    a.showinfo();
}
