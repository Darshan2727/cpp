#include<iostream>
using namespace std;
class Billl
{
   int rate,qty;
   float gst,netbill,amt,diss,bill;
   public:
   void price()
   {
    cout<<"Enter Rate:";
    cin>>rate;
    cout<<"Enter Qty:";
    cin>>qty;
   } 
   void amount()
   {
        amt=rate*qty;
   }
   void disscount()
   {
        diss=(amt*5/100);
   }
   void bi()
   {
        bill=amt-diss;
   }
   void gst18()
   {
        gst=(bill*18)/100;
   }
   void final()
   {
        netbill=bill+gst;
   }
   void pri()
   {
        cout<<"Rate\tQty\tAmt\tDiss5%\tBill\tGST18%\tNetbill";
       cout<<"\n"<<rate<<"\t"<<qty<<"\t"<<amt<<"\t"<<diss<<"\t"<<bill<<"\t"<<(float)gst<<"\t"<<(float)netbill;
   }
};
int main()
{
    Billl a;
    a.price();
    a.amount();
    a.disscount();
    a.bi();
    a.gst18();          
    a.final();
    a.pri();
}
