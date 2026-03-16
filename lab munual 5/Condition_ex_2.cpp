#include<iostream>
using namespace std;
main() 
{
    int value;
    cout<<"Enter a positive number: ";
    cin>>value;
    while (value<=0)
    {
        cout<<"Error: "<<value<<" is not a positive number";
        cout<<"Enter a positive number: ";
        cin>>value;
    }
    cout<<"Program ends";
    
}