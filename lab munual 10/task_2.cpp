#include <iostream>
using namespace std;
string Alphabet(char character)
{
    if (character >= 'A' && character <= 'Z')
    {
        cout << "You have entered the capital letter.";
    }
    else if (character >= 'a' && character <= 'z')
    {
        cout << "You have entered the small letter.";
    }
    else
    {
        cout<<"Invalid input (not an alphabet)";
    }
}
main()
{
    char letter;
    cout<<"Enetr the alphabet: ";
    cin>>letter;
    string result=Alphabet(letter);
}