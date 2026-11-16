// CSC 134
// M5 Lab 1 - Choose Your Own Adventure
// Hugh Plymale
// 11/16/2026

#include <iostream>
using namespace std;

// Function prototypes
void main_menu();
void choice_front_door();
void choice_back_door();
void choice_go_home();
void open_the_cellar();
void cellar_escape();

int main()
{
    main_menu();

    return 0;
}

// Main menu
void main_menu()
{
    int choice = 0;

    cout << "Welcome to The Spooky House!" << endl;
    cout << "You are standing outside an old house at night." << endl;

    while (choice != 4)
    {
        cout << "\nWhat would you like to do?" << endl;
        cout << "1. Try the front door" << endl;
        cout << "2. Go around to the back door" << endl;
        cout << "3. Go home" << endl;
        cout << "4. Quit" << endl;
        cout << "Enter your choice: ";

        cin >> choice;

        if (cin.fail())
        {
            cin.clear();
            cin.ignore(1000, '\n');
            cout << "Please enter a number." << endl;
        }
        else if (choice == 1)
        {
            choice_front_door();
        }
        else if (choice == 2)
        {
            choice_back_door();
        }
        else if (choice == 3)
        {
            choice_go_home();
        }
        else if (choice == 4)
        {
            cout << "Thanks for playing!" << endl;
        }
        else
        {
            cout << "That is not a valid choice. Try again." << endl;
        }
    }
}

// Front door choice
void choice_front_door()
{
    int choice = 0;

    cout << "\nYou walk up to the front door." << endl;
    cout << "You try the handle, but the door is locked." << endl;
    cout << "1. Go around to the back" << endl;
    cout << "2. Give up and go home" << endl;
    cout << "Enter your choice: ";

    cin >> choice;

    if (cin.fail())
    {
        cin.clear();
        cin.ignore(1000, '\n');
        cout << "Invalid input. Returning to the main menu." << endl;
    }
    else if (choice == 1)
    {
        choice_back_door();
    }
    else if (choice == 2)
    {
        choice_go_home();
    }
    else
    {
        cout << "That is not a valid choice." << endl;
    }
}

// Back door choice
void choice_back_door()
{
    int choice = 0;

    cout << "\nYou walk around the house to the back." << endl;
    cout << "The back door is open just a little bit." << endl;
    cout << "You hear something moving inside." << endl;

    while (choice != 1 && choice != 2)
    {
        cout << "\nWhat do you want to do?" << endl;
        cout << "1. Go inside and look for the cellar" << endl;
        cout << "2. Leave and go home" << endl;
        cout << "Enter your choice: ";

        cin >> choice;

        if (cin.fail())
        {
            cin.clear();
            cin.ignore(1000, '\n');
            cout << "Please enter a number." << endl;
        }
        else if (choice == 1)
        {
            open_the_cellar();
        }
        else if (choice == 2)
        {
            choice_go_home();
        }
        else
        {
            cout << "Please choose 1 or 2." << endl;
        }
    }
}

// Go home ending
void choice_go_home()
{
    cout << "\nYou decide that going inside an old house at night" << endl;
    cout << "is probably not the smartest idea." << endl;
    cout << "You get back in your car and make it home safely." << endl;
    cout << "ENDING 1: You made it home safe!" << endl;
}

// Discover the cellar
void open_the_cellar()
{
    int choice = 0;

    cout << "\nYou step inside the old house." << endl;
    cout << "The floor creaks under your feet." << endl;
    cout << "You notice a door in the floor leading down to a cellar." << endl;
    cout << "You open it and see a set of dark stone steps." << endl;
    cout << "1. Go down the steps" << endl;
    cout << "2. Turn around and leave" << endl;

    while (choice != 1 && choice != 2)
    {
        cout << "Enter your choice: ";
        cin >> choice;

        if (cin.fail())
        {
            cin.clear();
            cin.ignore(1000, '\n');
            cout << "Please enter a number." << endl;
        }
        else if (choice == 1)
        {
            cellar_escape();
        }
        else if (choice == 2)
        {
            choice_go_home();
        }
        else
        {
            cout << "Please choose 1 or 2." << endl;
        }
    }
}

// Escape ending
void cellar_escape()
{
    cout << "\nYou slowly walk down the stone steps." << endl;
    cout << "At the bottom, you find an old wooden door." << endl;
    cout << "You push it open and find a path leading outside." << endl;
    cout << "You run through the path and finally escape the house." << endl;
    cout << "ENDING 2: You escaped the spooky house!" << endl;
}