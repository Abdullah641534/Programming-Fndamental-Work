#include<iostream>
using namespace std;
main()
{
    int bill,discount,discount_bill;
    cout<<"Enter your bill: ";
    cin>>bill;
    if(bill <= 5000)
    {
        discount=bill*0.05;
        discount_bill=bill-discount;
        cout<<"Your discounted bill is: "<<discount_bill;
    }
    if(bill > 5000)
    {
        discount=bill*0.1;
        discount_bill=bill-discount;
        cout<<"Your discounted bill is: "<<discount_bill;
    }
}