#include <iostream>
using namespace std;
main() 
{
    int n;
    cout << "Enter number of flights: ";
    cin >> n;
    string flightNumber[n];
    string destination[n];
    int seatsAvailable[n];
    for (int i = 0; i < n; i++) 
    {
        cout << "\nEnter flight number for flight " << i + 1 << ": ";
        cin >> flightNumber[i];
        cout << "Enter destination for flight " << i + 1 << ": ";
        cin >> destination[i];
        cout << "Enter seats available for flight " << i + 1 << ": ";
        cin >> seatsAvailable[i];
    }
    cout << "\nFlight Information:\n";
    for (int i = 0; i < n; i++) {
        cout << flightNumber[i] << " to " << destination[i]
             << " has " << seatsAvailable[i] << " seats available." << endl;
    }
    cout << "\nFlights with less than 5 seats:\n";
    for (int i = 0; i < n; i++) {
        if (seatsAvailable[i] < 5) {
            cout << flightNumber[i] << " to " << destination[i]
                 << " has only " << seatsAvailable[i] << " seats left!" << endl;
        }
    }
    return 0;
}