// ATM simulator 
// Hussnain Ali Khan


#include <iostream>
using namespace std;

int main()
{
    cout << "------------------------------" << endl;
    cout << "Welcome to the ATM simulator" << endl;
    cout << "------------------------------" << endl;

    int account_number;
    int password;
    int balance = 1000;
    int option;
    int widthdraw;
    int deposit;
    int attempts = 0; 

    while (attempts < 3)
    {
        cout << "Enter your account number: ";
        cin >> account_number;

        cout << "Enter your password: ";
        cin >> password;

        if (account_number == 40298120 && password == 1234)
        {
            while (true)
            {
                cout << "1: check balance" << endl;
                cout << "2: withdraw" << endl;
                cout << "3: deposit" << endl;
                cout << "4: exit" << endl;
                cout << "Option: ";
                cin >> option;

                if (option == 1)
                {
                    cout << "Your current balance is " << balance << "$" << endl;
                }
                else if (option == 2)
                {
                    cout << "Select amount you want to withdraw: ";
                    cin >> widthdraw;

                if (widthdraw >= 1 && widthdraw <= balance)
                    {
                        balance -= widthdraw;
                        cout << "You have " << balance << "$ left." << endl;
                    }
                else
                    {
                        cout << "You don't have enough money to withdraw." << endl;
                    }
                }
                else if (option == 3)
                {
                    cout << "Enter deposit amount: ";
                    cin >> deposit;
                if (deposit >= 0 && deposit <= 1000)
                    {
                        balance += deposit;
                        cout << "You have " << balance << "$." << endl;
                    }
                else
                    {
                        cout << "Invalid deposit amount. The maximum deposit amount is 1000$" << endl;
                    }
                }
                else if (option == 4)
                {
                    cout << "OK, Have a nice day!" << endl;
                    break;
                }
                else
                {
                    cout << "Invalid option." << endl;
                }
            }
            break; 
        }
        else
        {
            attempts++;
            if (attempts < 3)
            {
                cout << "Invalid account number or password. Please try again." << endl;
            }
            else
            {
                cout << "You have attempted too many times. Your account is blocked." << endl;
            }
        }
    }

    return 0;
}

