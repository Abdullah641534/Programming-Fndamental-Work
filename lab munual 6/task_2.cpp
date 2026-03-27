#include<iostream>
using namespace std;
main()
{
    char word[50];
    int i;

    cout << "Enter word: ";
    cin >> word;

    for(i=0; word[i] != '\0'; i++);

    cout << "Reverse: ";
    for(i=i-1; i>=0; i--)
    {
        cout << word[i];
    }

    return 0;
} 