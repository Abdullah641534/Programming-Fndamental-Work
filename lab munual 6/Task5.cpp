#include<iostream>
using namespace std;
main()
{
    int n;
    cout<<"How many numbers do you want to enter: ";
    cin>>n;
    int array[n];
    for(int i=0;i<n;i++)
    {
        cout<<"Enter "<<i<<" number: ";
        cin>>array[i];
    }
    cout<<"You eneterd: \n";
    for(int i=0;i<n;i++)
    {
        cout<<array[i]<<" ";
    }   
}