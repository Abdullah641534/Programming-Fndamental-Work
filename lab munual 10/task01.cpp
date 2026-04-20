#include <iostream>
#include <cmath>
using namespace std;
main()
{
    float number1, number2;
    cout << "Enter 1st number: ";
    cin >> number1;
    cout << "Enter 2nd number: ";
    cin >> number2;
    cout << "The minimum of " << number1 << " and " << number2 << " is: " << min(number1, number2);
}