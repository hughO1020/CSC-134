//csc-134
//plymaleh
//11/08/2026





#include <iostream>
using namespace std;

// Void function
void displayMessage()
{
    cout << "Welcome to the Basic Functions Program!" << endl;
}

// Value returning function
int getNumber()
{
    int number;

    cout << "Enter a number: ";
    cin >> number;

    return number;
}

int main()
{
    // Call the void function
    displayMessage();

    // Call the value returning function
    int result = getNumber();

    cout << "The number you entered is " << result << "." << endl;

    return 0;
}