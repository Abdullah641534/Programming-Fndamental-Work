#include<iostream>
using namespace std;

int main()
{
    char str[100];

    cout << "Enter a word: ";
    cin.getline(str, 100);

    for(int i = 0; str[i] != '\0'; i++)
    {
        if(str[i] == 'z')
            str[i] = 'a';
        else if(str[i] == 'Z')
            str[i] = 'A';
        else if(str[i] >= 'a' && str[i] <= 'y')
            str[i] = str[i] + 1;
        else if(str[i] >= 'A' && str[i] <= 'Y')
            str[i] = str[i] + 1;
    }

    cout << "Updated string: " << str;

    return 0;
}