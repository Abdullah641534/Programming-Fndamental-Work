#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    int total_student = 100; // fixed size
    int index = 0;

    // arrays
    string nameArray[100];
    int ageArray[100];
    float matricArray[100];
    float interArray[100];
    float ecatArray[100];
    string pref1Array[100];
    string pref2Array[100];
    string pref3Array[100];
    float aggriArray[100];

    while (true)
    {
        system("cls");
        cout << "---------------- University Managment System ----------------" << endl;
        cout << "1. Admin" << endl;
        cout << "2. Student" << endl;
        cout << "3. Exit" << endl;
        cout << "Choose option: ";

        string useroption;
        cin >> useroption;

        // ================= ADMIN =================
        if (useroption == "1")
        {
            for (int i = 0; i < 3; i++)
            {
                system("cls");
                string username, password;
                cout << "Admin Login\n";
                cout << "Username: ";
                cin >> username;
                cout << "Password: ";
                cin >> password;

                if (username == "admin" && password == "123")
                {
                    while (true)
                    {
                        system("cls");
                        cout << "1. Show All Students" << endl;
                        cout << "2. Search Student" << endl;
                        cout << "3. Update Record" << endl;
                        cout << "4. Generate Merit List" << endl;
                        cout << "5. Delete Record" << endl;
                        cout << "6. Logout" << endl;
                        cout << "Option: ";

                        string adminoption;
                        cin >> adminoption;

                        // SHOW
                        if (adminoption == "1")
                        {
                            cout << "Name\tAge\tMatric\tFSC\tECAT\n";
                            for (int i = 0; i < index; i++)
                            {
                                cout << nameArray[i] << "\t" << ageArray[i] << "\t"
                                     << matricArray[i] << "\t" << interArray[i]
                                     << "\t" << ecatArray[i] << endl;
                            }
                        }

                        // SEARCH
                        else if (adminoption == "2")
                        {
                            string name;
                            cout << "Enter name: ";
                            cin >> name;

                            bool found = false;

                            for (int i = 0; i < index; i++)
                            {
                                if (nameArray[i] == name)
                                {
                                    cout << "Found:\n";
                                    cout << nameArray[i] << "\t" << ageArray[i] << "\t"
                                         << matricArray[i] << "\t" << interArray[i]
                                         << "\t" << ecatArray[i] << endl;
                                    found = true;
                                    break;
                                }
                            }

                            if (!found)
                                cout << "Record not found\n";
                        }

                        // UPDATE
                        else if (adminoption == "3")
                        {
                            string name;
                            cout << "Enter name to update: ";
                            cin >> name;

                            bool found = false;

                            for (int i = 0; i < index; i++)
                            {
                                if (nameArray[i] == name)
                                {
                                    cout << "Enter new data\n";

                                    cin >> nameArray[i];
                                    cin >> ageArray[i];
                                    cin >> matricArray[i];
                                    cin >> interArray[i];
                                    cin >> ecatArray[i];
                                    cin >> pref1Array[i];
                                    cin >> pref2Array[i];
                                    cin >> pref3Array[i];

                                    found = true;
                                    break;
                                }
                            }

                            if (!found)
                                cout << "Record not found\n";
                        }

                        // MERIT LIST
                        else if (adminoption == "4")
                        {
                            for (int i = 0; i < index; i++)
                            {
                                aggriArray[i] =
                                    (matricArray[i] / 1050.0 * 100 * 0.3) +
                                    (interArray[i] / 1100.0 * 100 * 0.4) +
                                    (ecatArray[i] / 400.0 * 100 * 0.3);
                            }

                            // sorting
                            for (int i = 0; i < index - 1; i++)
                            {
                                for (int j = i + 1; j < index; j++)
                                {
                                    if (aggriArray[i] < aggriArray[j])
                                    {
                                        swap(aggriArray[i], aggriArray[j]);
                                        swap(nameArray[i], nameArray[j]);
                                        swap(ageArray[i], ageArray[j]);
                                        swap(matricArray[i], matricArray[j]);
                                        swap(interArray[i], interArray[j]);
                                        swap(ecatArray[i], ecatArray[j]);
                                    }
                                }
                            }

                            cout << "Name\tAggregate\n";
                            for (int i = 0; i < index; i++)
                            {
                                cout << nameArray[i] << "\t" << aggriArray[i] << endl;
                            }
                        }

                        // DELETE
                        else if (adminoption == "5")
                        {
                            string name;
                            cout << "Enter name to delete: ";
                            cin >> name;

                            bool found = false;

                            for (int i = 0; i < index; i++)
                            {
                                if (nameArray[i] == name)
                                {
                                    // shift left
                                    for (int j = i; j < index - 1; j++)
                                    {
                                        nameArray[j] = nameArray[j + 1];
                                        ageArray[j] = ageArray[j + 1];
                                        matricArray[j] = matricArray[j + 1];
                                        interArray[j] = interArray[j + 1];
                                        ecatArray[j] = ecatArray[j + 1];
                                    }

                                    index--;
                                    found = true;
                                    cout << "Deleted successfully\n";
                                    break;
                                }
                            }

                            if (!found)
                                cout << "Record not found\n";
                        }

                        else if (adminoption == "6")
                            break;

                        else
                            cout << "Invalid option\n";

                        getch();
                    }
                    break;
                }
                else
                {
                    cout << "Invalid login\n";
                    getch();
                }
            }
        }

        // ================= STUDENT =================
        else if (useroption == "2")
        {
            system("cls");

            cout << "Enter Name: ";
            cin >> nameArray[index];

            cout << "Enter Age: ";
            cin >> ageArray[index];

            cout << "Enter Matric: ";
            cin >> matricArray[index];

            cout << "Enter FSC: ";
            cin >> interArray[index];

            cout << "Enter ECAT: ";
            cin >> ecatArray[index];

            cout << "Enter Pref1 Pref2 Pref3: ";
            cin >> pref1Array[index] >> pref2Array[index] >> pref3Array[index];

            index++;

            cout << "Saved!\n";
            getch();
        }

        else if (useroption == "3")
            break;

        else
        {
            cout << "Invalid option\n";
            getch();
        }
    }

    cout << "Thanks for using system\n";
}