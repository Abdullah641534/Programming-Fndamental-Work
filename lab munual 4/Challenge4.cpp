#include<iostream>
using namespace std;
main()
{
    string password="UET1324",user_enter;
    cout<<"Enter password: ";
    cin>>user_enter;
    if(password == user_enter)
    {
        cout<<"Wow! You have cracked the code";
    }
    else
    {
        cout<<"It is not that simple, Try again";
    }
}