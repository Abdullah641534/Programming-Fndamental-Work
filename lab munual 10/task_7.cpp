#include <iostream>
using namespace std;
string calculatePoolState(int Volume, int Pipes1, int Pipes2, double Hours)
{
    double totalWater = (Pipes1 + Pipes2) * Hours;
    if (totalWater <= Volume)
    {
        int poolPercent = (int)((totalWater / Volume) * 100);
        double pipe1Water = Pipes1 * Hours;
        double pipe2Water = Pipes2 * Hours;
        int pipe1Percent = (int)((pipe1Water / totalWater) * 100);
        int pipe2Percent = (int)((pipe2Water / totalWater) * 100);
        cout << "The pool is " << poolPercent << "% full. Pipe 1: " << pipe1Percent << "%. Pipe 2: " << pipe2Percent << " %.";
    }
    else
    {
        double overflow = totalWater - Volume;
        cout << "For " << Hours << " hours, the pool overflows with " << totalWater << " liters";
    }
}
main()
{
    int volume, pipes1, pipes2;
    double Hour;
    cout << "Enter volume of the pool in liters: ";
    cin >> volume;
    cout << "Enter flow rate of the first pipe per hour: ";
    cin >> pipes1;
    cout << "Enter flow rate of the second pipe per hour: ";
    cin >> pipes2;
    cout << "Enter hours that the worker is absent: ";
    cin >> Hour;
    cout << calculatePoolState(volume, pipes1, pipes2, Hour) << endl;
}