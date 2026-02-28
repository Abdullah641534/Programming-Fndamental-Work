#include<iostream>
using namespace std;
main()
{
float imposter_count;
cout<<"Enter imposter_count: ";
cin>>imposter_count;
float player_count;
cout<<"Enter player count: ";
cin>>player_count;
float chance;
chance=100*(imposter_count/player_count);
int percentage;
percentage=chance;
cout<<"Chance of being an imposter: "<<percentage<<"%";
}