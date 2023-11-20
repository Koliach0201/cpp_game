#include <iostream>

using namespace std;

int main()
{
    cout << "Difficulty Levels\n\n";
    cout << "1 - Easy\n";
    cout << "2 - Normal\n";
    cout << "3 - Hard\n\n";

    int choice;
    cout << "Choice: ";
    cin >> choice;

    enum choices
    {
        EASY = 1,
        NORMAL,
        HARD
    };

    switch (choice)
    {
    case EASY:
        cout << "You picked Easy.\n";
        break; // if no break, the code will evaluate choice in following cases
    case NORMAL:
        cout << "You picked Normal.\n";
        break;
    case HARD:
        cout << "You picked Hard.\n";
        break;
    default: // execute this if choice doesn't match any condition
        cout << "You made an illegal choice.\n";
    }

    return 0;
}