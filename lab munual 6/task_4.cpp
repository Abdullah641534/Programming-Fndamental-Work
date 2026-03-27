#include<iostream>
using namespace std;

int main()
{
    char numb[100];
    int i;

    cout<<"Enter a number: ";
    cin>>numb;

    for(i=0; numb[i] != '\0'; i++);

    cout<<"Reverse: ";

    for(i=i-1; i>=0; i--)
    {
        cout<<numb[i];
    }

    return 0;
}