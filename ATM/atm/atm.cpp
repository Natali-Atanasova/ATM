// atm.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
// Next time enter two users/accounts 
//emp transfer option
void showMenu() {
    cout << "********MENU********" << endl;
    cout << "1. Check balance " << endl;
    cout << "2. Deposit " << endl;
    cout << "3.Withdtraw" << endl;
    cout << "4.EXIT" << endl;
    cout << "********************* " << endl;

}
int main()
{
    int option;
    double balance = 500;

    do {
        showMenu();
        cout << "Option:";
        cin >> option;
        system("cls");


        switch (option)
        {
        case 1:cout << "Balance is:" << balance << "$" << endl; break;
        case 2: cout << "Deposit amount:";

            double depositAmount;
            cin >> depositAmount;
            balance += depositAmount;
            break;

        case 3: cout << "Withdraw amount:";
            double withdrawAmount;
            cin >> withdrawAmount;
            if (withdrawAmount <= balance)
                balance -= withdrawAmount;
            else
                cout << "Not enough money!" << endl;
            break;

        }
    }    while (option!=4);
    
    system("pause>0");
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
