#include<iostream>
using namespace std;
main() 
{
    int n;
    cout << "Enter number of products: ";
    cin >> n;
    string productNames[100];
    float prices[100];
    int quantity[100];
    for (int i = 0; i < n; i++) {
        cout << "\nEnter name of product " << i + 1 << ": ";
        cin >> productNames[i];
        cout << "Enter price of " << productNames[i] << ": ";
        cin >> prices[i];
        cout << "Enter quantity of " << productNames[i] << ": ";
        cin >> quantity[i];
    }
    cout << "Product Inventory Report\n";
    for (int i = 0; i < n; i++) {
        float total = prices[i] * quantity[i];
        cout << productNames[i] << ": $"
             << prices[i] << ", "
             << quantity[i] << " in stock, Total value: $"
             << total << endl;
    }
    return 0;
}