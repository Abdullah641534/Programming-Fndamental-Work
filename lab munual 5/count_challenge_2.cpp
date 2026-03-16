#include<iostream>
using namespace std;
main() 
{
    int number, digit, count = 0;

    cout << "Enter number: ";
    cin >> number;

    cout << "Enter digit: ";
    cin >> digit;

    for (int i=number;i>0;i=i/10)
    {
        if(i%10==digit)
        {
            count++;
        }
    }
    cout<<"Frequency of "<<digit<<" in "<<number<<" is: "<<count;  
    return 0;
}