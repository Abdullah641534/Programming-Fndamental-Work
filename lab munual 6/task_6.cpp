#include <iostream>
using namespace std;
main()
{
    int numb,arr[numb],count=0,largest;
    cout<<"Enter the number of elements: ";
    cin>>numb;
    cout << "Enter " << numb << " numbers, one per line:\n";
    for(int i=0;i<numb;i++)
    {
        cin>>arr[i];
    }
    largest=arr[0];
    for(int i=1;i<numb;i++)
    if (arr[i]>largest)
    {
        largest=arr[i];
    }
    cout<<"The largest number entered is: "<<largest;
    
}