#include <iostream>
#include "UserInterface.h"
#include "Machine.h"

using namespace std;

int main()
{
    Machine mc;
    UserInterface ui(&mc);
    
    int choice = 0;

    while(choice != -1){
        cout << "-1 = Exit" << endl;
        cout << "1 = Turn on Machine" << endl;
        cout << "2 = Turn Off Machine" << endl;
        cout << "3 = Print Temps" << endl;
        cout << "Enter number for choice: ";

        cin >> choice;

        system("cls");

        switch (choice) {
        case 1: ui.TurnOn(); break;
        case 2: ui.TurnOff(); break;
        case 3: ui.PrintTemp(); break;
        }
        cout << "\n\n\n" << endl;
    }
}