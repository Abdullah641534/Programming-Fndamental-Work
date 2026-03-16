#include<iostream>
using namespace std;
main() 
{
    char ch='Y';
    while(ch=='Y')
    {
        cout<<"I am happy\n";
        cout<<"Press Y to continue or any key to exit: ";
        cin>>ch;
    }
}