#include<iostream>
using namespace std;
main()
{
float imposter_count;
cout<<"Enter imposter: ";
cin>>imposter_count;
float player_count;
cout<<"Enter players: ";
cin>>player_count;
float chance;
chance=100*(imposter_count/player_count);
cout<<"chance = "<<chance<<"%";
}