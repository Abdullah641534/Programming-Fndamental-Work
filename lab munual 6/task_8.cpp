#include<iostream>
using namespace std;
main()
{
    int first[2],second[100],array2,result[100];
    cout<<"Enter 2 elements foe the first array, one per line:\n";
    for(int i=0;i<2;i++)
    {
        cin>>first[i];
    }
    cout<<"Enter the number of elements for the second array: ";
    cin>>array2;
    cout << "Enter " << array2 << " elements for the second array, one per line:\n";
    for(int i=0;i<array2;i++)
    {
        cin>>second[i];
    }
    result[0]=first[0];
    for (int i=0;i<array2;i++)
    {
        result[i+1]=second[i];
    }
    result[array2+1]=first[1];
    cout<<"Resulting array: ";
    for(int i=0;i<array2+2;i++)
    {
        cout<<result[i];
        if(i<array2+1)
        cout<<",";
    }
}