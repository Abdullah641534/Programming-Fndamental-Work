#include<iostream>
using namespace std;
main()
{
    int monthly_salery=10000,laptop=50000,months_advance=6,advance_percent=50,advance,month_6,required_months;
    advance=monthly_salery*advance_percent/100;
    month_6=advance*months_advance;
    if(advance >= laptop)
    {
        cout<<"Ali buy laptop\n";
    }
    else
    {
        cout<<"Ali cannot buy the laptop\n";
    }
    required_months=laptop/advance;
    cout<<"Months required to buy laptop: "<<required_months;

}