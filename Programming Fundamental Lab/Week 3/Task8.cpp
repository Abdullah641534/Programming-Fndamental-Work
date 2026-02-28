#include<iostream>
using namespace std;
main()
{
float vegetable_price;
cout<<"Enter vegetable price per kilogram (in coins): ";
cin>>vegetable_price;
float fruit_price;
cout<<"Enter fruit price per kilogram (in coins): ";
cin>>fruit_price;
int total_vegetable;
cout<<"Enter total kilograms of vegetables: ";
cin>>total_vegetable;
int total_fruit;
cout<<"Enter total kilogram of fruits: ";
cin>>total_fruit;
float rps;
rps=((vegetable_price/1.94)*total_vegetable)+((fruit_price/1.94)*total_fruit);
cout<<"Total earnings in Rupees (Rps): "<<rps;
}



