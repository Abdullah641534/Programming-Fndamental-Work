#include <iostream>
using namespace std;

string OddishOrEvenish(int num)
{
    int sum = 0;
    while (num > 0)
    {
        sum = sum + (num % 10);
        num = num / 10;
    }
    if (sum % 2 == 0)
        cout << "Evenish";
    else
        cout << "Oddish";
}
main()
{
    int number;
    cout << "Enter a five digit number: ";
    cin >> number;
    cout << OddishOrEvenish(number);
}