#include<iostream>
using namespace std;
main()
{
    char word[100];
    
    cout << "Enter a word: ";
    cin >> word;

    cout << "Locations of alphabets in the array:\n";

    for (int i = 0;word[i] != '\0'; i++) {
        cout << "Alphabet '" << word[i] << "' is at location " << i << endl;
    }
}