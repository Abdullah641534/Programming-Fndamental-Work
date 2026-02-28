#include<iostream>
using namespace std;
main()
{
int min;
cout<<"Enter minutes: ";
cin>>min;
int sec;
cout<<"Enter fps: ";
cin>>sec;
int min_in_sec;
min_in_sec=min*60;
int frames;
frames=min_in_sec*sec;
cout<<"Total frames: "<<frames;
}
