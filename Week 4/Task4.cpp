#include<iostream>
using namespace std;
main()
{
    float Red_rose,White_rose,Tulips;
    cout<<"Enter number of Red rose: ";
    cin>>Red_rose;
    cout<<"Enter number of White rose: ";
    cin>>White_rose;
    cout<<"Enter number of Tulips: ";
    cin>>Tulips;
    float total_price;
    total_price=Red_rose*2+White_rose*4.10+Tulips*2.50;
    if(total_price>200)
    {
        float discount;
        discount=total_price*0.2;
        float actual_price;
        actual_price=total_price-discount;
        cout<<"Original price: "<<total_price<<"\nPrice after Discount: "<<actual_price;
    }
    else
    {
        cout<<"Your price: "<<total_price;
    }
}