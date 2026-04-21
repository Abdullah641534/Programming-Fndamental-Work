#include <iostream>
using namespace std;
main()
{
    cout << "^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^" << endl;
    cout << "<~~~~~~~~~~~~~~~~~   JOJO COFFEE   ~~~~~~~~~~~~~~~~~~~~>" << endl;
    cout << "________________________________________________________" << endl;

    int total = 0;

    // Coffee menu
    string items[5] = {"Espresso", "Latte", "Cappuccino", "Mocha", "Americano"};
    int prices[5] = {200, 250, 300, 280, 220};
    // Admin login
    string username = "admin";
    int Password = 1234;
    int choice;
    while (true)
    {

        cout << "1. User login\n";
        cout << "2. Admin login\n";
        cout << "3. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        // user login
        if (choice == 1)
        {
            int userchoice, quantity;

            do
            {
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

                // 1 view menu
                if (userchoice == 1)
                {
                    for (int i = 0; i < 5; i++)
                    {
                        cout << i + 1 << ". " << items[i] << " _ " << prices[i] << "\n";
                    }
                }
                // 2 order single
                else if (userchoice == 2)
                {
                    int item;
                    cout << "Enter item number: ";
                    cin >> item;
                    cout << "QUANTITY: ";
                    cin >> quantity;
                    total += prices[item - 1] * quantity;
                }
                // 3 ORDER MULTIPLE
                else if (userchoice == 3)
                {
                    int item;
                    do
                    {
                        cout << "Item (0 exit): ";
                        cin >> item;

                        if (item > 0 && item <= 5)
                        {
                            cout << "quantity: ";
                            cin >> quantity;
                            total += prices[item - 1] * quantity;
                        }

                    } while (item != 0);
                }
                // 4 BILL
                else if (userchoice == 4)
                    cout << "Total Bill: " << total << endl;

                // 5 DISCOUNT
                else if (userchoice == 5)
                    cout << "Final Bill: " << total - (total * 0.1) << endl;

                // 6 SEARCH
                else if (userchoice == 6)
                {
                    string s;
                    cout << "Search item: ";
                    cin >> s;

                    for (int i = 0; i < 5; i++)
                    {
                        if (s == items[i])
                        {
                            cout << "Found: " << items[i] << " - " << prices[i] << endl;
                        }
                        else
                        {
                            cout << "NOT FOUND";
                        }
                    }
                }

                // 7 EXPENSIVE
                else if (userchoice == 7)
                {
                    int max = prices[0], idx = 0;

                    for (int i = 1; i < 5; i++)
                        if (prices[i] > max)
                        {
                            max = prices[i];
                            idx = i;
                        }

                    cout << "Most Expensive: " << items[idx] << endl;
                }

                // 8 CHEAPEST
                else if (userchoice == 8)
                {
                    int min = prices[0], idx = 0;

                    for (int i = 1; i < 5; i++)
                        if (prices[i] < min)
                        {
                            min = prices[i];
                            idx = i;
                        }

                    cout << "Cheapest: " << items[idx] << endl;
                }

                // 9 CLEAR BILL
                else if (userchoice == 9)
                {
                    total = 0;
                    cout << "Bill Cleared!\n";
                }

            } while (userchoice != 10);

            total += total;
        }

        // Admin panel
        else if (choice == 2)
        {

            cout << "Enter username: ";
            cin >> username;
            cout << "Enter password: ";
            cin >> Password;

            if (username == "admin" && Password == 1234)
            {
                int admin_choice;

                do
                {
                    cout << "\n~~~~~~~~~~Admin Panel~~~~~~~~~~\n";
                    cout << "1. View menu\n";
                    cout << "2. Add item\n";
                    cout << "3. Update price\n";
                    cout << "4. Delete item\n";
                    cout << "5. Search item\n";
                    cout << "6. Total sale\n";
                    cout << "7. Reset menu\n";
                    cout << "8. logout\n";
                    cout << "\nAdmin choice: \n";
                    cin >> admin_choice;

                    // View menu
                    if (admin_choice == 1)
                    {
                        for (int i = 0; i < 5; i++)
                        {
                            cout << i + 1 << ". " << items[i] << " - " << prices[i] << endl;
                        }
                    }

                    // ADD ITEM
                    else if (admin_choice == 2)
                    {
                        cout << "Enter item: ";
                        cin >> items[4];
                        cout << "Price: ";
                        cin >> prices[4];
                    }
                    // UPDATE PRICE
                    else if (admin_choice == 3)
                    {
                        int n;
                        cout << "Item number: ";
                        cin >> n;
                        cout << "New price: ";
                        cin >> prices[n - 1];
                    }

                    // DELETE ITEM
                    else if (admin_choice == 4)
                    {
                        int n;
                        cout << "Delete item: ";
                        cin >> n;
                        items[n - 1] = "Deleted";
                        prices[n - 1] = 0;
                    }

                    // SEARCH
                    else if (admin_choice == 5)
                    {
                        string s;
                        cout << "Search item: ";
                        cin >> s;

                        for (int i = 0; i < 5; i++)
                        {
                            if (s == items[i])
                            {
                                cout << "Found " << items[i] << endl;
                            }
                            else
                            {
                                cout << "not found";
                            }
                        }
                    }

                    // TOTAL SALES
                    else if (admin_choice == 6)
                    {
                        cout << "Total Sales: " << total << endl;
                    }

                    // RESET MENU
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
                    }
                } while (admin_choice != 8);
            }
        }
        else if (choice == 3)
            break;
    }
}
