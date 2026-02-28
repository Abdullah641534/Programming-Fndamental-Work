#include<iostream>
using namespace std;
main()
{
int paint_area;
cout<<"Enter paint area: ";
cin>>paint_area;
int width;
cout<<"Enter width: ";
cin>>width;
int height;
cout<<"Enter height: ";
cin>>height;
int walls_painted;
walls_painted=paint_area/(width*height);
cout<<"Walls painted = "<<walls_painted;
}