#include<iostream>
using namespace std;
main()
{
    char symbol;
    float numb1,numb2,execute;
    cout<<"Enter first number: ";
    cin>>numb1;
    cout<<"Enter symbol: ";
    cin>>symbol;
    cout<<"Enter second number: ";
    cin>>numb2;
    if(symbol == '+')
    {
        execute=numb1+numb2;
        cout<<numb1<<symbol<<numb2<<"="<<execute;
    }
    if(symbol == '-')
    {
        execute=numb1-numb2;
        cout<<numb1<<symbol<<numb2<<"="<<execute;
    }
    if(symbol == '/')
    {
        execute=numb1/numb2;
        cout<<numb1<<symbol<<numb2<<"="<<execute;
    }
    if(symbol == '*')
    {
        execute=numb1*numb2;
        cout<<numb1<<symbol<<numb2<<"="<<execute;
    }
}