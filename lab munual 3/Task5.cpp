#include<iostream>
using namespace std;
main()
{
string name;
cout<<"Enter your name :";
cin>>name;
float matric;
cout<<"Enter matric marks (out of 1100) :";
cin>>matric;
float inter;
cout<<"Enter inter marks (out of 550) :";
cin>>inter;
float Ecat;
cout<<"Enter Ecat marks (out of 400) :";
cin>>Ecat;
float aggregate;
aggregate=((matric/1100.0)*10)+((inter/550.0)*40)+((Ecat/400.0)*50);
cout<<"Aggregate score for "<<name<<"is "<<aggregate;
} 

