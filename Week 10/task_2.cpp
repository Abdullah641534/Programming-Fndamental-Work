#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
double pyramidVolume(double length, double width, double height, string unit)
{
    double factor;
    if (unit == "millimeters")
        factor = 0.001;
    else if (unit == "centimeters")
        factor = 0.01;
    else if (unit == "meters")
        factor = 1;
    else if (unit == "kilometers")
        factor = 1000;
    else
    {
        cout << "Invalid unit." << endl;
        return -1;
    }
    double volume_m3 = (length * width * height) / 3.0;
    double converted = volume_m3 / (factor * factor * factor);
    return converted;
}
int main()
{
    double length, width, height;
    string unit;
    cout << "Enter length, width, height (in meters): ";
    cin >> length;
    cin >> width;
    cin >> height;
    cout << "Enter output unit (millimeters, centimeters, meters, kilometers): ";
    cin >> unit;
    double result = pyramidVolume(length, width, height, unit);
    if (result >= 0)
    {
        cout << fixed << setprecision(6);
        cout << result << " cubic " << unit << endl;
    }
    return 0;
}