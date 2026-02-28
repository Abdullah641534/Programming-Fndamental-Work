#include<iostream>
using namespace std;
main()
{
int paint_area;
cout<<"Number of square-meters you can paint: ";
cin>>paint_area;
int width;
cout<<"Width of the single wall (in meters): ";
cin>>width;
int height;
cout<<"Height of the single wall (in meters): ";
cin>>height;
int walls_painted;
walls_painted=paint_area/(width*height);
cout<<"Number of walls you can paint: "<<walls_painted;
}