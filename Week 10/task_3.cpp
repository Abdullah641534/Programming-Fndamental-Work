#include <iostream>
using namespace std;

float taxCalculator(char type, float price, string &vehicleName)
{
    float taxRate;

    switch (type)
    {
    case 'M':
        taxRate = 0.06;
        vehicleName = "Motorcycle";
        break;
    case 'E':
        taxRate = 0.08;
        vehicleName = "Electric";
        break;
    case 'S':
        taxRate = 0.10;
        vehicleName = "Sedan";
        break;
    case 'V':
        taxRate = 0.12;
        vehicleName = "Van";
        break;
    case 'T':
        taxRate = 0.15;
        vehicleName = "Truck";
        break;
    default:
        vehicleName = "Invalid";
        return -1;
    }

    return price + (price * taxRate);
}

int main()
{
    char type;
    float price;
    string vehicleName;

    cout << "Enter Vehicle Type Code (M/E/S/V/T): ";
    cin >> type;

    cout << "Enter Vehicle Price: ";
    cin >> price;

    float finalPrice = taxCalculator(type, price, vehicleName);

    if (finalPrice < 0)
    {
        cout << "Invalid vehicle type." << endl;
    }
    else
    {
        cout << "The final price on a vehicle of type "
             << vehicleName
             << " after adding the tax is $"
             << finalPrice << endl;
    }

    return 0;
}