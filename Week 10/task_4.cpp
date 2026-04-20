#include <iostream>
#include <cmath>
#include <string>
using namespace std;

string projectTimeCalculation(int neededHours, int days, int workers)
{
    double effectiveDays = days * 0.9;
    double totalHours = effectiveDays * workers * 10;
    int finalHours = floor(totalHours);
    if (finalHours >= neededHours)
    {
        return "Yes!" + to_string(finalHours - neededHours) + " hours left.";
    }
    else
    {
        return "Not enough time!" + to_string(neededHours - finalHours) + " hours needed.";
    }
}
main()
{
    int neededHours, days, workers;
    cout << "Enter needed hours:" << endl;
    cin >> neededHours;
    cout << "Enter number of days of firm:" << endl;
    cin >> days;
    cout << "Enter number of workers:" << endl;
    cin >> workers;
    cout << projectTimeCalculation(neededHours, days, workers) << endl;
    return 0;
}