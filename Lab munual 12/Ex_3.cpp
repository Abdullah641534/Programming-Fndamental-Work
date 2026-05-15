#include<iostream>
using namespace std;
main()
{
    int y=20;
    int &ref=y;
    cout<<"Original value of Y: "<<y<<endl;
    ref=30;
    cout<<"Modified value of Y: "<<y<<endl;
    return 0;
}