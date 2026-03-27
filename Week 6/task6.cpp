#include<iostream>
using namespace std;
main()
{
    int name;
    cout << "Enter number of students: ";
    cin >> name;
    string students[name];
    cout << "Enter student names:\n";
    for(int i = 0; i < name; i++)
    {
        cin >> students[i];
    }
    for(int i = 0; i < name - 1; i++)
    {
        for(int j = i + 1; j < name; j++)
        {
            if(students[i] > students[j])
            {
                string alphabet = students[i];
                students[i] = students[j];
                students[j] = alphabet;
            }
        }
    }
    cout << "Students in alphabetical order:\n";
    for(int i = 0; i < name; i++)
    {
        cout << students[i] << endl;
    }
    return 0;
}