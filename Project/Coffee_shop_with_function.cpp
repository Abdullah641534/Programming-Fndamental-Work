#include <iostream>
#include <cstdlib>
using namespace std;

// ===== USER FUNCTIONS =====

void viewMenu(string items[], int prices[])
{
    cout << "Menu:\n";
    for (int i = 0; i < 5; i++)
    {
        cout << i + 1 << ". " << items[i] << " - " << prices[i] << "\n";
    }
}

void orderSingle(int &total, int prices[])
{
    int item, quantity;
    cout << "Enter item number: ";
    cin >> item;

    if (item >= 1 && item <= 5)
    {
        cout << "Quantity: ";
        cin >> quantity;
        total += prices[item - 1] * quantity;
    }
    else
    {
        cout << "Invalid item!\n";
    }
}

void orderMultiple(int &total, int prices[])
{
    int item, quantity;

    do
    {
        cout << "Item (0 to exit): ";
        cin >> item;

        if (item >= 1 && item <= 5)
        {
            cout << "Quantity: ";
            cin >> quantity;
            total += prices[item - 1] * quantity;
        }

    } while (item != 0);
}

void viewBill(int total)
{
    cout << "Total Bill: " << total << endl;
}

void calculateDiscount(int total)
{
    float discount = total * 0.1;
    cout << "Discount: " << discount << endl;
    cout << "Final Bill: " << total - discount << endl;
}

void searchItem(string items[], int prices[])
{
    string s;
    cout << "Search item: ";
    cin >> s;

    bool found = false;
    for (int i = 0; i < 5; i++)
    {
        if (s == items[i])
        {
            cout << "Found: " << items[i] << " - " << prices[i] << endl;
            found = true;
        }
    }

    if (!found)
        cout << "Item not found\n";
}

void mostExpensive(string items[], int prices[])
{
    int max = prices[0], idx = 0;

    for (int i = 1; i < 5; i++)
    {
        if (prices[i] > max)
        {
            max = prices[i];
            idx = i;
        }
    }

    cout << "Most Expensive: " << items[idx] << endl;
}

void cheapest(string items[], int prices[])
{
    int min = prices[0], idx = 0;

    for (int i = 1; i < 5; i++)
    {
        if (prices[i] < min)
        {
            min = prices[i];
            idx = i;
        }
    }

    cout << "Cheapest: " << items[idx] << endl;
}

void clearBill(int &total)
{
    total = 0;
    cout << "Bill Cleared!\n";
}

// ===== ADMIN FUNCTIONS =====

void adminViewMenu(string items[], int prices[])
{
    for (int i = 0; i < 5; i++)
    {
        cout << i + 1 << ". " << items[i] << " - " << prices[i] << endl;
    }
}

void addItem(string items[], int prices[])
{
    cout << "Enter item: ";
    cin >> items[4];
    cout << "Price: ";
    cin >> prices[4];
}

void updatePrice(int prices[])
{
    int n;
    cout << "Item number: ";
    cin >> n;
    cout << "New price: ";
    cin >> prices[n - 1];
}

void deleteItem(string items[], int prices[])
{
    int n;
    cout << "Delete item: ";
    cin >> n;
    items[n - 1] = "";
    prices[n - 1] = 0;
}

void resetMenu(string items[], int prices[])
{
    items[0] = "Espresso"; prices[0] = 200;
    items[1] = "Latte"; prices[1] = 250;
    items[2] = "Cappuccino"; prices[2] = 300;
    items[3] = "Mocha"; prices[3] = 280;
    items[4] = "Americano"; prices[4] = 220;

    cout << "Menu Reset Done!\n";
}

// ===== MAIN =====

int main()
{
    int total = 0;

    string items[5] = {"Espresso", "Latte", "Cappuccino", "Mocha", "Americano"};
    int prices[5] = {200, 250, 300, 280, 220};

    int choice;

    while (true)
    {
        system("cls");

        cout << "1. User login\n";
        cout << "2. Admin login\n";
        cout << "3. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        system("cls");

        // ===== USER PANEL =====
        if (choice == 1)
        {
            int userchoice, quantity;

            do
            {
                system("cls");

                cout << "1.View Menu\n";
                cout << "2.Order Single Item\n";
                cout << "3.Order Multiple Items\n";
                cout << "4.View Total Bill\n";
                cout << "5.Discount Calculation\n";
                cout << "6.Search Item\n";
                cout << "7.Most Expensive Item\n";
                cout << "8.Cheapest Item\n";
                cout << "9.Clear Bill\n";
                cout << "10.Logout\n";

                cin >> userchoice;
                system("cls");

                if (userchoice == 1) viewMenu(items, prices);
                else if (userchoice == 2) orderSingle(total, prices);
                else if (userchoice == 3) orderMultiple(total, prices);
                else if (userchoice == 4) viewBill(total);
                else if (userchoice == 5) calculateDiscount(total);
                else if (userchoice == 6) searchItem(items, prices);
                else if (userchoice == 7) mostExpensive(items, prices);
                else if (userchoice == 8) cheapest(items, prices);
                else if (userchoice == 9) clearBill(total);

                system("pause");

            } while (userchoice != 10);
        }

        // ===== ADMIN PANEL =====
        else if (choice == 2)
        {
            string inputUser;
            int inputPass;

            cout << "Enter username: ";
            cin >> inputUser;
            cout << "Enter password: ";
            cin >> inputPass;

            system("cls");

            if (inputUser == "admin" && inputPass == 1234)
            {
                int admin_choice;

                do
                {
                    system("cls");

                    cout << "1. View menu\n";
                    cout << "2. Add item\n";
                    cout << "3. Update price\n";
                    cout << "4. Delete item\n";
                    cout << "5. Search item\n";
                    cout << "6. Total sale\n";
                    cout << "7. Reset menu\n";
                    cout << "8. Logout\n";

                    cin >> admin_choice;
                    system("cls");

                    if (admin_choice == 1) adminViewMenu(items, prices);
                    else if (admin_choice == 2) addItem(items, prices);
                    else if (admin_choice == 3) updatePrice(prices);
                    else if (admin_choice == 4) deleteItem(items, prices);
                    else if (admin_choice == 5) searchItem(items, prices);
                    else if (admin_choice == 6) cout << "Total Sales: " << total << endl;
                    else if (admin_choice == 7) resetMenu(items, prices);

                    system("pause");

                } while (admin_choice != 8);
            }
            else
            {
                cout << "Invalid login!\n";
                system("pause");
            }
        }

        else if (choice == 3)
        {
            break;
        }
    }
}