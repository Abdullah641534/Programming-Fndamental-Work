#include<iostream>
using namespace std;
int add(int a,int b)
{
    return a+b;
}
main()
{
    int n1,n2;
    cout<<"Enter 1st number: ";
    cin>>n1;
    cout<<"Enter 2nd number: ";
    cin>>n2;
    int sum=add(n1,n2);
    cout<<sum;
}