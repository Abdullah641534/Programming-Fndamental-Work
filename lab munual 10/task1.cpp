#include <iostream>
using namespace std;
int add(int num1, int num2)
{
    int sum = num1 + num2;
    return sum;
}
main()
{
    int number1, number2, result;
    cout << "Enter 1st number: ";
    cin >> number1;
    cout << "Enter 2nd number: ";
    cin >> number2;
    result = add(number1, number2);
    cout << "Sum is " << result;
}