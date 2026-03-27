#include <iostream>
using namespace std;
int main()
{
    string a, result = "";
    char vowel;
    cout << "Enter a string: ";
    getline(cin, a);
    for(int i = 0; i < a.length(); i++)
    {
        vowel = a[i];
        if(vowel!='a' && vowel!='e' && vowel!='i' && vowel!='o' && vowel!='u' &&
            vowel!='A' && vowel!='E' && vowel!='I' && vowel!='O' && vowel!='U')
            {
                result += vowel;
            }
    }
    cout << "String without vowels: " << result;
    return 0;
}