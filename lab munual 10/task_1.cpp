#include <iostream>
using namespace std;
int multiply(int number)
{
    int Multiply = number * 5;
    return Multiply;
}
main()
{
    int number, result;
    cout << "Enter number: ";
    cin >> number;
    result = multiply(number);
    cout << "Result is " << result;
}