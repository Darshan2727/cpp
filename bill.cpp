#include<iostream>
using namespace std;
int main()
{
    float rate,qty,amt,diss,bill,gst,netbill;
    cout<<"Rate:";
    cin>>rate;
    cout<<"qty:";
    cin>>qty;
    amt=rate*qty;
    diss=(amt*5)/100;
    bill=amt-diss;
    gst=(bill*18)/100;
    netbill=bill+gst;
    cout<<"Rate\tQty\tAmount\tDiss\tBill\tGST\tNetbill";
    cout<<"\n"<<rate<<"\t"<<qty<<"\t"<<amt<<"\t"<<diss<<"\t"<<bill<<"\t"<<gst<<"\t"<<netbill;
}