#include<iostream>
using namespace std;
main()
{
    string country_name;
    cout<<"Enter country name: ";
    cin>>country_name;
    int ticket_price;
    cout<<"Enter ticket price: ";
    cin>>ticket_price;
    int discount;
    int actual_price;
    if(country_name=="ireland")
    {
        discount=0.1*ticket_price;
        actual_price=ticket_price-discount;
        cout<<"Your ticket price: "<<actual_price;
    }
    else
    {
        discount=0.05*ticket_price;
        actual_price=ticket_price-discount;
        cout<<"Your ticket price:"<<actual_price;
    }

}