#include<iostream>
using namespace std;
main()
{
    int numb,arr[numb],large,small=arr[0];
    cout<<"Enter number of element: ";
    cin>>numb;
    cout<<"Enter "<<numb<<" elements:\n";
    for(int i=0;i<numb;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<numb;i++)
    {
        if(arr[i]>large)
        {
            large=arr[i];
        }
        if(arr[i]<small)
        {
            small=arr[i];
        }
    }
    cout<<"Largest number: "<<large<<"\n";
    cout<<"Smallest number: "<<small;
}