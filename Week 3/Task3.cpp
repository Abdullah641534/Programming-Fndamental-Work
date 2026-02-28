#include<iostream>
using namespace std;
main()
{
int initial_velocity;
cout<<"Enter initial velocity (m/s): ";
cin>>initial_velocity;
int acceleration;
cout<<"Enter acceleration (m/s^2): ";
cin>>acceleration;
int time;
cout<<"Enter time: ";
cin>>time;
int Final_velocity;
Final_velocity=(acceleration*time)+initial_velocity;
cout<<"Final_velocity (m/s): "<<Final_velocity;
}


