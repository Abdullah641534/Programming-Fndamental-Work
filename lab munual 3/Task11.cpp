#include<iostream>
using namespace std;
main()
{
int current_population;
cout<<"Enter the current population: ";
cin>>current_population;
int birth_rate;
cout<<"Enter the monthly birth rate (number of births per month): ";
cin>>birth_rate;
int three_decades;
three_decades=(birth_rate*12)*30+current_population;
cout<<"population in three decades will be: "<<three_decades;
}