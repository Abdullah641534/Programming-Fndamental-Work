#include<iostream>
using namespace std;

int main()
{
    int n, arr[100], unique[100];
    int count = 0;

    cout << "Enter the number of elements: ";
    cin >> n;

    cout << "Enter " << n << " numbers, one per line:\n";

    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];

        bool found = false;

        for(int j = 0; j < count; j++)
        {
            if(arr[i] == unique[j])
            {
                cout << "Already Entered: " << arr[i] << endl;
                found = true;
                break;
            }
        }

        if(!found)
        {
            unique[count] = arr[i];
            count++;
        }
    }

    cout << "Unique numbers entered: ";
    for(int i = 0; i < count; i++)
    {
        cout << unique[i] << " ";
    }

    return 0;
}