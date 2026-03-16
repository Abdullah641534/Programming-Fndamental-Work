#include<iostream>
using namespace std;
main()
{
    int a=24,b=50,c=29,table;
    for(int i=1;i<=10;i++)
    {
        table=a*i;
        cout<<a<<" * "<<i<<" = "<<table<<"\n";
    }
    cout<<"\n";
    for(int i=1;i<=10;i++)
    {
        table=b*i;
        cout<<b<<" * "<<i<<" = "<<table<<"\n";
    }
    cout<<"\n";
    for(int i=1;i<=10;i++)
    {
        table=c*i;
        cout<<c<<" * "<<i<<" = "<<table<<"\n";
    }
}