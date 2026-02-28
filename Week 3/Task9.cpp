#include<iostream>
using namespace std;
main()
{
int digit_4;
cout<<"Enter a 4-digit number: ";
cin>>digit_4;
int sum_individual_digit;
sum_individual_digit=(digit_4%10)+((digit_4/10)%10)+((digit_4/100)%10)+(digit_4/1000);
cout<<"Sum of the individual digits: "<<sum_individual_digit;
}