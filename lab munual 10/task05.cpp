#include <iostream>
#include <cmath>
using namespace std;
float getdeterminant(float a, float b, float c)
{
    float determinant = (b * b) - 4 * a * c;
}
void two_real_roots(float a, float b, float Determinant)
{
    float root1, root2;
    root1 = (-b + sqrt(Determinant)) / (2 * a);
    root2 = (-b - sqrt(Determinant)) / (2 * a);
    cout << "Solutions: x = " << root1 << " and x = " << root2 << endl;
}
void complex_root(float a, float b, float Determinant)
{
    float root1, root2;
    root1 = -b / (2 * a);
    root2 = sqrt(-Determinant) / (2 * a);
    cout << "Complex solutions: X = " << root1 << " + " << root2 << "i and x =" << root1 << " - " << root2 << "i " << endl;
}
void one_real_root(float a, float b)
{
    float root;
    root = -b / 2 * a;
    cout << "Solution: x = " << root << endl;
}
main()
{
    float a, b, c;
    cout << "Enter the value of a: ";
    cin >> a;
    cout << "Enetr the value of b: ";
    cin >> b;
    cout << "Enter the value of c: ";
    cin >> c;
    if (a == 0)
    {
        cout << "not a quadratic equation.";
    }
    float Determinant = getdeterminant(a, b, c);
    if (Determinant > 0)
    {
        two_real_roots(a, b, Determinant);
    }
    else if (Determinant < 0)
    {
        complex_root(a, b, Determinant);
    }
    else
    {
        one_real_root(a, b);
    }
}