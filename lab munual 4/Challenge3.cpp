#include<iostream>
using namespace std;
main()
{
    string word1,word2;
    cout<<"Enter word1: ";
    cin>>word1;
    cout<<"Enter word2: ";
    cin>>word2;
    if(word1 == word2)
    {
        cout<<"yes, The word are same";
    }
    else
    {
        cout<<"no, The word are different";
    }
}