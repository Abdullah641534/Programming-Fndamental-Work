#include<iostream>
using namespace std;
main()
{
    int change[4],due,money;
    float total;
    cout<<"Enter quarters: ";
    cin>>change[0];
    cout<<"Enter dimes: ";
    cin>>change[1];
    cout<<"Enter nickels: ";
    cin>>change[2];
    cout<<"Enter pennies: ";
    cin>>change[3];
    cout<<"Enter total amount of due: ";
    cin>>total;
    money=(change[0]*25)+(change[1]*10)+(change[2]*5)+(change[3]*1);
    due=money*100;
    if(total<=due)
    {
        cout<<"Can you pay the amount? Yes";
    }
    else
    {
        cout<<"Can you pay the amount? No";
    }
}   