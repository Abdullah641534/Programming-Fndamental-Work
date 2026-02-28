#include<iostream>
using namespace std;
main()
{
int sides;
cout<<"Enter the number of sides of the polygon: ";
cin>>sides;
int Angle;
Angle = (sides-2)*180;
cout<<"The total sum of internal angles of a : "<<sides<<"-sided polygon is : "<<Angle<<" degrees";
}