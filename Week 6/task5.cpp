#include<iostream>
using namespace std;
main()
{
    int name;
    cout << "Enter number of customers: ";
    cin >> name;
    string customers[name];
    cout << "Enter customer names:\n";
    for(int i = 0; i < name; i++)
    {
        cin >> customers[i];
    }
    char letter;
    cout << "Enter a letter: ";
    cin >> letter;
    int count = 0;
    for(int i = 0; i < name; i++)
    {
        if(customers[i][0] == letter)
        {
            count++;
        }
    }
    cout << "Names starting with " << letter << ": " << count;
    return 0;
}