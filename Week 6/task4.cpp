#include<iostream>
using namespace std;
main()
{
    string name[5];
    cout<<"Enter names of 5 students:\n";
    for(int i=0;i<5;i++)
    {
        cin>>name[i];
    }
    cout<<"Students Names are:\n";
    for(int i=0;i<5;i++)
    {
        cout<<name[i]<<"\n";
    }
}