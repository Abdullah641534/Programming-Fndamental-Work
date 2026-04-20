#include <iostream>
using namespace std;
bool symmetrical(int num)
{
    int first = num / 100;
    int last = num % 10;
    return (first == last);
}
main()
{
    int number;
    cout << "Enter a three-digit number: ";
    cin >> number;
    if (symmetrical(number))
        cout << "The number is symmetrical";
    else
        cout << "The number is not symmetrical";
}