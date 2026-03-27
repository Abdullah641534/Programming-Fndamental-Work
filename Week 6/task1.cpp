#include<iostream>
using namespace std;
main()
{
    int numb,arr[numb],sum;
    cout<<"Enter number of element: ";
    cin>>numb;
    cout<<"Enter "<<numb<<" numbers:\n";
    for(int i=0;i<numb;i++)
    {
        cin>>arr[i];
        sum=sum+arr[i];
    }
    cout<<"Sum of all elements: "<<sum;
    return 0;
}