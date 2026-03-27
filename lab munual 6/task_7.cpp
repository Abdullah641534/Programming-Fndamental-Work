#include<iostream>
using namespace std;
main()
{
    int n;
    float resistance[100],total=0;
    cout<<"Enter the number of resistance in the series circuit: ";
    cin>>n;
    cout<<"Enter the resistance values (in ohms) of the 3 resistor, one per line:\n";
    for (int i=0;i<n;i++)
    {
        cin>>resistance[i];
    }
    for(int i=0;i<n;i++)
    total+=resistance[i];
    cout<<"The total resistance of the series circuit is "<<total<<" ohms.";
}