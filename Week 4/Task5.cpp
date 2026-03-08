#include<iostream>
using namespace std;
main()
{
    int holidays,workng_days,Time_game,norms=30000,difference,hours,minutes;
    cout<<"Enter holidays: ";
    cin>>holidays;
    workng_days=365-holidays;
    Time_game=workng_days*63+holidays*127;
    difference=(norms-Time_game);
    if (difference<0)
    difference= -difference;
    hours=difference/60;
    minutes=difference%60;
    if(Time_game>norms)
    {
        cout<<"Tom will run away\n"<<hours<<" hours and "<<minutes<<" minutes for play";
    }
    else
    {
        cout<<"Tom sleep well\n"<<hours<<" hours and "<<minutes<<" minutes less for play";
    }
}