#include<iostream>
using namespace std;
main()
{
    int gcd=1,lcm,a,b;
    cout<<"Enter first number: ";
    cin>>a;
    cout<<"Enter second number: ";
    cin>>b;
    for(int i=1;i<=a;i++)
    {
        for(int i=1;i<=b;i++)
        {
            if(a%i==0)
            {
                if(b%i==0)
                {
                    gcd=i;
                }
            }
        }
    }
    lcm=(a*b)/gcd;
    cout<<"GCD of "<<a<<" and "<<b<<" is: "<<gcd<<"\n";
    cout<<"LCM of "<<a<<" and "<<b<<" is: "<<lcm; 
}