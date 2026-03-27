#include<iostream>
using namespace std;
main()
{
    int numb,arr[numb],even=0;
    cout<<"Enter number of elements: ";
    cin>>numb;
    cout<<"Enter "<<numb<<" elements:\n";
    for(int i=0;i<numb;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<numb;i++)
    {
        if(arr[i]%2==0)
        {
            even++;
        }
    }
    cout<<"Total even numbers: "<<even;
}