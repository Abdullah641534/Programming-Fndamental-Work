#include <iostream>
#include <conio.h>
using namespace std;
main()
{
    int total_student; // total size
    int index = 0;

    // data structures
    string nameArray[total_student];
    int ageArray[total_student];
    float matricArray[total_student];
    float interArray[total_student];
    float ecatArray[total_student];
    string pref1Array[total_student];
    string pref2Array[total_student];
    string pref3Array[total_student];
    float aggriArray[total_student];

    while (true)
    {
        // main header of ums
        system("cls");
        cout << "--------------------------------------------------------------" << endl;
        cout << "------------University Admission Management System------------" << endl;
        cout << "--------------------------------------------------------------" << endl;

        cout << "User menu " << endl;
        cout << "1. Admin " << endl;
        cout << "2. Student " << endl;
        cout << "3. Exit " << endl;
        cout << "Choose option: " << endl;
        string useroption;
        cin >> useroption;

        cout << "You choose: " << useroption << endl;
        if (useroption == "1")
        {
            // write here the admin code
            int countattemp = 0;
            for (int i = 0; i < 3; i++)
            {
                system("cls");
                cout << "Admin menu: Login attempt " << i + 1 << endl;
                cout << "Enter username: ";
                string username;
                cin >> username;
                cout << "Enter password: ";
                string password;
                cin >> password;
                if (username == "admin" && password == "123")
                {
                    cout << "Login success";

                    while (true)
                    {
                        system("cls");
                        cout << "1. Show all student" << endl;
                        cout << "2. Search student" << endl;
                        cout << "3. Update student record" << endl;
                        cout << "4. Generate merit list" << endl;
                        cout << "5. Delete record by name" << endl;
                        cout << "6. Logout" << endl;
                        cout << "Choose the option: ";
                        string adminoption;
                        cin >> adminoption;
                        if (adminoption == "1")
                        {
                            cout << "Name\tAge\tMatric\tFsc\tEcat\tP1\tP2\tP3" << endl;
                            for (int i = 0; i < index; i++)
                            {
                                if (nameArray[i] != "")
                                {
                                    cout << nameArray[i] << "\t" << ageArray[i] << "\t" << matricArray[i] << "\t" << interArray[i] << "\t"
                                         << ecatArray[i] << "\t" << pref1Array[i] << "\t" << pref2Array[i] << "\t" << pref3Array[i] << endl;
                                }
                            }
                        }
                        else if (adminoption == "2")
                        {
                            // Find student by name
                            cout << "Enter the name you want to search: ";
                            string name;
                            cin >> name;
                            bool found = false;
                            int foundindex = -1;
                            for (int i = 0; i < index; i++)
                            {
                                if (nameArray[i] == name)
                                {
                                    foundindex = i;

                                    found = true;
                                }
                            }

                            if (found = false)
                            {
                                cout << "Record not found against name" << name << endl;
                            }
                            else
                            {
                                cout << "Name\tAge\tMatric\tFsc\tEcat\tP1\tP2\tP3" << endl;
                                cout << nameArray[foundindex] << "\t" << ageArray[foundindex] << "\t" << matricArray[foundindex] << "\t" << interArray[foundindex] << "\t"
                                     << ecatArray[foundindex] << "\t" << pref1Array[foundindex] << "\t" << pref2Array[foundindex] << "\t" << pref3Array[foundindex] << endl;
                            }
                        }
                        else if (adminoption == "3")
                        {
                            // Update record
                            cout << "Enter the name you want to update record of: ";
                            string name;
                            cin >> name;
                            bool found = false;
                            int foundindex = -1;
                            for (int i = 0; i < index; i++)
                            {
                                if (nameArray[i] == name)
                                {
                                    foundindex = i;

                                    found = true;
                                }
                            }
                            if (found == true)
                            {

                                cout << "------Old Record------" << endl;
                                cout << "Name\tAge\tMatric\tFsc\tEcat\tP1\tP2\tP3" << endl;
                                cout << nameArray[foundindex] << "\t" << ageArray[foundindex] << "\t" << matricArray[foundindex] << "\t" << interArray[foundindex] << "\t"
                                     << ecatArray[foundindex] << "\t" << pref1Array[foundindex] << "\t" << pref2Array[foundindex] << "\t" << pref3Array[foundindex] << endl;
                                cout << "Enter new record for update" << endl;
                                cout << "Enter your name: ";
                                string name;
                                cin >> name;
                                cout << "Enter age: ";
                                int age;
                                cin >> age;
                                cout << "Enter Matric marks: ";
                                float matric;
                                cin >> matric;
                                cout << "Enter FSC marks: ";
                                float fsc;
                                cin >> fsc;
                                cout << "Enter ECAT marks: ";
                                float ecat;
                                cin >> ecat;
                                cout << "Enter CS, CE, EE as your prefrences" << endl;
                                cout << "Enter your 1st pref: ";
                                string pref1;
                                cin >> pref1;
                                cout << "Enter your 2nd pref: ";
                                string pref2;
                                cin >> pref2;
                                cout << "Enter your 3rd pref: ";
                                string pref3;
                                cin >> pref3;

                                nameArray[foundindex] = name;
                                ageArray[foundindex] = age;
                                matricArray[index] = matric;
                                interArray[foundindex] = fsc;
                                ecatArray[foundindex] = ecat;
                                pref1Array[foundindex] = pref1;
                                pref2Array[foundindex] = pref2;
                                pref3Array[foundindex] = pref3;
                            }
                            else
                            {
                                cout << "Record not found" << endl;
                            }
                        }
                        else if (adminoption == "4")
                        {
                            // generate merit list
                            for (int i = 0; i < index; i++)
                            {
                                float aggri = matricArray[i] / 1050.0 * 100.0 * 0.30 + interArray[i] / 1100.0 * 100 * 0.4 + ecatArray[i] / 400.0 * 100.0 * 0.3;
                                aggriArray[i] = aggri;
                            }
                            // sorting the data on the basis of aggrigate
                            for (int i = 0; i < index; i++)
                            {
                                for (int j = i + 1; j < index; j++)
                                {
                                    if (aggriArray[i] < aggriArray[j])
                                    {
                                        // swaping of name
                                        string tempname = nameArray[i];
                                        nameArray[i] = nameArray[j];
                                        nameArray[j] = tempname;
                                        // swaping of matric
                                        float tempmatric = matricArray[i];
                                        matricArray[i] = matricArray[j];
                                        matricArray[j] = tempmatric;
                                        // swaping of inter
                                        float tempinter = interArray[i];
                                        interArray[i] = interArray[j];
                                        interArray[j] = tempinter;
                                        // swaping of ecat
                                        float tempecat = ecatArray[i];
                                        ecatArray[i] = ecatArray[j];
                                        ecatArray[j] = tempecat;
                                        // swaping of p1
                                        string temppref1 = pref1Array[i];
                                        pref1Array[i] = pref1Array[j];
                                        pref1Array[j] = temppref1;
                                        // swaping of p2
                                        string temppref2 = pref2Array[i];
                                        pref2Array[i] = pref2Array[j];
                                        pref2Array[j] = temppref2;
                                        // swaping of p3
                                        string temppref3 = pref3Array[i];
                                        pref3Array[i] = pref3Array[j];
                                        pref3Array[j] = temppref3;
                                        // swaping of aggrigate
                                        float tempaggri = aggriArray[i];
                                        aggriArray[i] = aggriArray[j];
                                        aggriArray[j] = tempaggri;
                                    }
                                }
                            }

                            // code to display all data with aggrigate
                            cout << "Name\tAge\tAggrigate" << endl;
                            for (int i = 0; i < index; i++)
                            {
                                if (nameArray[i] != "")
                                {
                                    cout << nameArray[i] << "\t" << ageArray[i] << "\t" << aggriArray[i] << endl;
                                }
                            }

                            // admit student into disciples
                        }
                        else if (adminoption == "5")
                        {
                            // Delete student record
                            cout << "Enter the name you want to delete record of: ";
                            string name;
                            cin >> name;
                            bool found = false;
                            int foundindex = -1;
                            for (int i = 0; i < index; i++)
                            {
                                if (nameArray[i] == name)
                                {
                                    foundindex = i;

                                    found = true;
                                }
                            }
                            if (found == true)
                            {
                                nameArray[foundindex] = name;
                                ageArray[foundindex] = 0;
                                matricArray[index] = 0;
                                interArray[foundindex] = 0;
                                ecatArray[foundindex] = 0;
                                pref1Array[foundindex] = "";
                                pref2Array[foundindex] = "";
                                pref3Array[foundindex] = "";
                                cout << "Record of " << name << " deleted" << endl;
                            }
                            else
                            {
                                cout << "Record not found" << endl;
                            }
                        }
                        else if (adminoption == "6")
                        {
                            break;
                        }
                        else
                        {
                            cout << "Wrong option selected" << endl;
                        }
                        cout << "Press any key to continue";
                        getch();
                    }
                    getch();
                    break;
                }
                else
                {
                    cout << "username or password is invalid" << endl;
                }
                cout << "Press anykey to continue.. ";
                getch();
            }
        }
        else if (useroption == "2")
        {
            // write here the student code
            system("cls");
            cout << "Welcome to UMS student menu" << endl;
            cout << "Enter your name: ";
            string name;
            cin >> name;
            cout << "Enter age: ";
            int age;
            cin >> age;
            cout << "Enter Matric marks: ";
            float matric;
            cin >> matric;
            cout << "Enter FSC marks: ";
            float fsc;
            cin >> fsc;
            cout << "Enter ECAT marks: ";
            float ecat;
            cin >> ecat;
            cout << "Enter CS, CE, EE as your prefrences" << endl;
            cout << "Enter your 1st pref: ";
            string pref1;
            cin >> pref1;
            cout << "Enter your 2nd pref: ";
            string pref2;
            cin >> pref2;
            cout << "Enter your 3rd pref: ";
            string pref3;
            cin >> pref3;

            nameArray[index] = name;
            ageArray[index] = age;
            matricArray[index] = matric;
            interArray[index] = fsc;
            ecatArray[index] = ecat;
            pref1Array[index] = pref1;
            pref2Array[index] = pref2;
            pref3Array[index] = pref3;
            index++;
            cout << "Your data has been saved";
            cout << "Press anykey to continue.. ";
            getch();
        }
        else if (useroption == "3")
        {
            break;
        }
        else
        {
            cout << "You entered wrong option " << endl;
        }
    } // end of our main while loop

    cout << endl
         << "Thanks for using this software";
}