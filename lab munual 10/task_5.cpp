#include <iostream>
using namespace std;
string timeTravel(int hour, int minute)
{
    minute += 15;
    if (minute >= 60)
    {
        minute -= 60;
        hour++;
    }
    if (hour == 24)
        hour = 0;
    return to_string(hour) + ":" + to_string(minute);
}
main()
{
    int hours, minutes;
    cout << "Enter Hours: ";
    cin >> hours;
    cout << "Enter Minutes: ";
    cin >> minutes;
    cout << timeTravel(hours, minutes);
    return 0;
}