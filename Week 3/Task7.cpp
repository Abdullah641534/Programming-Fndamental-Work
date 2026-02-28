#include<iostream>
using namespace std;
main()
{
string movie;
cout<<"Enter the movie name: ";
cin>>movie;
int adult_ticket;
cout<<"Enter the adult ticket price: $";
cin>>adult_ticket;
int child_ticket;
cout<<"Enter the child ticket price: $";
cin>>child_ticket;
int adult_ticket_sold;
cout<<"Enter the number of adult tickets sold: $";
cin>>adult_ticket_sold;
int child_ticket_sold;
cout<<"Enter the number of child tickets sold: $";
cin>>child_ticket_sold;
float charity;
cout<<"Enter the percentage of amount to be donated to charity: ";
cin>>charity;
string Movie;
Movie=movie;
cout<<"\nMovie: "<<Movie<<"\n";
int total_amount;
total_amount=(adult_ticket*adult_ticket_sold)+(child_ticket*child_ticket_sold);
cout<<"Total Amount Generated from ticket sale: $"<<total_amount<<"\n";
float donation;
donation=(charity/100)*total_amount;
cout<<"Donation to charity("<<charity<<"%): $"<<donation<<"\n";
int remaining;
remaining=total_amount-donation;
cout<<"Remaining amount after donation: $"<<remaining;
}
