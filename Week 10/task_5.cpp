#include <iostream>
using namespace std;
float calculateSalary(float base, int score, int experience)
{
    float bonusPercent;
    if (score >= 90)
        bonusPercent = 0.20;
    else if (score >= 75)
        bonusPercent = 0.10;
    else
        bonusPercent = 0.05;
    if (experience >= 5)
        bonusPercent += 0.05;
    return base + (base * bonusPercent);
}
int main()
{
    float base;
    int score, experience;
    cout << "Enter base, score and experience in years:\n";
    cin >> base >> score >> experience;
    float finalSalary = calculateSalary(base, score, experience);
    cout << "Final Salary: " << finalSalary << endl;
    return 0;
}