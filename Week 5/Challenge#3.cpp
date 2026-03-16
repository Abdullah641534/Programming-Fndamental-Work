#include<iostream>
using namespace std;
int main()
{
    int password,choice,balance,total_amount,after_withdraw;
    for(int i=1;i<=3;i++)
    {
        cout<<"Enter ATM pin: ";
        cin>>password;
        if(password==1234)
        {
            cout<<"Login succeessful\n";
            break;
        }
        else
        {
            cout<<"Wrong Password\n";
        }
        if(i==3 && !(password==1234))
        {
            cout<<"Too many attempts. Program end.\n";
            return 0;
        }
    }
    for(int i=1;i<=5;i++)
        {
             cout <<"\n---- ATM MENU ----\n";
             cout<<"1. Check balance\n";
             cout<<"2. Deposit money\n";
             cout<<"3. Withdraw money\n";
             cout<<"4. current money\n";
             cout<<"5. Exit\n";
             cout<<"Enter choice: ";
             cin>>choice;
             if(choice==1)
             {
                cout<<"Enter balance: ";
                cin>>balance;
             }
             else if(choice==2)
             {
                int deposit;
                cout<<"Enter amount to deposit: ";
                cin>>deposit;
                total_amount=balance+deposit;
                cout<<"\nMoney Deposited Successfully\n";
             }
             else if(choice==3)
             {
                int withdraw;
                cout<<"Enter amount to withdraw: ";
                cin>>withdraw;
                after_withdraw=total_amount-withdraw;
                cout<<"\nPlease collect your cash\n";
             }
              else if(choice==4)
             {
                cout<<"\nCurrent balance: "<<after_withdraw;
             }
             else if(choice==5)
             {
                cout<<"\nThank you for using ATM";
             }
        }
}