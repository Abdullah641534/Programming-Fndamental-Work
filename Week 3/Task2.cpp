#include<iostream>
using namespace std;
main()
{
int min;
cout<<"Number of Minutes: ";
cin>>min;
int sec;
cout<<"Frames per Second: ";
cin>>sec;
int min_in_sec;
min_in_sec=min*60;
int frames;
frames=min_in_sec*sec;
cout<<"Total number of frames "<<frames;
}
