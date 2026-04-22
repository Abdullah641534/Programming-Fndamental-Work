#include <iostream>
#include <cstdlib> // for system()
using namespace std;

main()
{
    int total = 0;

    // Coffee menu
    string items[5] = {"Espresso", "Latte", "Cappuccino", "Mocha", "Americano"};
    int prices[5] = {200, 250, 300, 280, 220};

    int choice;

    while (true)
    {
        system("cls"); // clear screen

        cout << "^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^" << endl;
        cout << "<~~~~~~~~~~~~~~~~~   JOJO COFFEE   ~~~~~~~~~~~~~~~~~~~~>" << endl;
        cout << "________________________________________________________" << endl;

        cout << "1. User login\n";
        cout << "2. Admin login\n";
        cout << "3. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        system("cls");

        // USER PANEL
        if (choice == 1)
        {
            int userchoice, quantity;

            do
            {
                system("cls");

                cout << "\n~~~~~~~~~User Panel~~~~~~~~~~\n";
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
                cout << "\nEnter choice: ";
                cin >> userchoice;

                system("cls");

                // VIEW MENU
                if (userchoice == 1)
                {
                    cout << "Menu:\n";
                    for (int i = 0; i < 5; i++)
                    {
                        cout << i + 1 << ". " << items[i] << " - " << prices[i] << "\n";
                    }
                    system("pause");
                }

                // ORDER SINGLE
                else if (userchoice == 2)
                {
                    int item;
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
                    system("pause");
                }

                // ORDER MULTIPLE
                else if (userchoice == 3)
                {
                    int item;
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

                    system("pause");
                }

                // VIEW BILL
                else if (userchoice == 4)
                {
                    cout << "Total Bill: " << total << endl;
                    system("pause");
                }

                // DISCOUNT
                else if (userchoice == 5)
                {
                    float discount = total * 0.1;
                    cout << "Discount: " << discount << endl;
                    cout << "Final Bill: " << total - discount << endl;
                    system("pause");
                }

                // SEARCH ITEM
                else if (userchoice == 6)
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

                    system("pause");
                }

                // MOST EXPENSIVE
                else if (userchoice == 7)
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
                    system("pause");
                }

                // CHEAPEST
                else if (userchoice == 8)
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
                    system("pause");
                }

                // CLEAR BILL
                else if (userchoice == 9)
                {
                    total = 0;
                    cout << "Bill Cleared!\n";
                    system("pause");
                }

            } while (userchoice != 10);
        }

        // ADMIN PANEL
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

                    cout << "\n~~~~~~~~~~Admin Panel~~~~~~~~~~\n";
                    cout << "1. View menu\n";
                    cout << "2. Add item\n";
                    cout << "3. Update price\n";
                    cout << "4. Delete item\n";
                    cout << "5. Search item\n";
                    cout << "6. Total sale\n";
                    cout << "7. Reset menu\n";
                    cout << "8. Logout\n";
                    cout << "\nAdmin choice: ";
                    cin >> admin_choice;

                    system("cls");

                    if (admin_choice == 1)
                    {
                        for (int i = 0; i < 5; i++)
                        {
                            cout << i + 1 << ". " << items[i] << " - " << prices[i] << endl;
                        }
                        system("pause");
                    }

                    else if (admin_choice == 2)
                    {
                        cout << "Enter item: ";
                        cin >> items[4];
                        cout << "Price: ";
                        cin >> prices[4];
                        system("pause");
                    }

                    else if (admin_choice == 3)
                    {
                        int n;
                        cout << "Item number: ";
                        cin >> n;
                        cout << "New price: ";
                        cin >> prices[n - 1];
                        system("pause");
                    }

                    else if (admin_choice == 4)
                    {
                        int n;
                        cout << "Delete item: ";
                        cin >> n;
                        items[n - 1] = "";
                        prices[n - 1] = 0;
                        system("pause");
                    }

                    else if (admin_choice == 5)
                    {
                        string s;
                        cout << "Search item: ";
                        cin >> s;

                        bool found = false;

                        for (int i = 0; i < 5; i++)
                        {
                            if (s == items[i])
                            {
                                cout << "Found " << items[i] << endl;
                                found = true;
                            }
                        }

                        if (!found)
                            cout << "Not found\n";

                        system("pause");
                    }

                    else if (admin_choice == 6)
                    {
                        cout << "Total Sales: " << total << endl;
                        system("pause");
                    }

                    else if (admin_choice == 7)
                    {
                        items[0] = "Espresso";
                        prices[0] = 200;
                        items[1] = "Latte";
                        prices[1] = 250;
                        items[2] = "Cappuccino";
                        prices[2] = 300;
                        items[3] = "Mocha";
                        prices[3] = 280;
                        items[4] = "Americano";
                        prices[4] = 220;

                        cout << "Menu Reset Done!\n";
                        system("pause");
                    }

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