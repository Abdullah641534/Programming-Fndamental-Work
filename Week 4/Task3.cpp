#include<iostream>
using namespace std;
main()
{
    int temp_1,temp_2,difference;
    cout<<"Enter temperature city 1: ";
    cin>>temp_1;
    cout<<"Enter Temperature city 2: ";
    cin>>temp_2;
    difference=temp_1-temp_2;
    if(difference>10)
    {
        cout<<"Difference is too big\nProgram end";
    }
    else
    {
        cout<<"Program end";
    }

}