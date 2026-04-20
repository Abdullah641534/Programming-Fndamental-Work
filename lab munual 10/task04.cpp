#include <iostream>
#include <cmath>
using namespace std;
float Height(float distance, float angledegree)
{
    float radian = angledegree / 57.2958;
    float height = distance * tan(radian);
    return height;
}
main()
{
    int Distance, angle;
    float result;
    cout << "Enter the distance from the base of the tree (in feet): ";
    cin >> Distance;
    cout << "Enter the angle of elevation (in degrees): ";
    cin >> angle;
    result = Height(Distance, angle);
    cout << "The height of the tree is: " << result << " feet";
}