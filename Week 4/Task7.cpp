#include<iostream>
using namespace std;
main()
{
    string shape;
    cout<<"Enter shape: ";
    cin>>shape;
    if(shape=="square")
    {
        float side,Area;
        cout<<"Enter side: ";
        cin>>side;
        Area=side*side;
        cout<<"your Area is: "<<Area;
    }
    if(shape=="rectangle")
    {
        float lenght,width,area;
        cout<<"Enter lenght: ";
        cin>>lenght;
        cout<<"Enter width: ";
        cin>>width;
        area=lenght*width;
        cout<<"Your Area: "<<area;
    }
    if(shape=="circle")
    {
        float radius,pi=3.1419,area;
        cout<<"Enter radius: ";
        cin>>radius;
        area=pi*(radius*radius);
        cout<<"Your Area: "<<area;
    }
    if(shape=="triangle")
    {
        float base,height,area;
        cout<<"Enter base: ";
        cin>>base;
        cout<<"Enter height: ";
        cin>>height;
        area=0.5*base*height;
        cout<<"Your Area: "<<area;
    }
}