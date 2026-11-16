//csc-134
//Hugh Plymale
//M4HW1
//11/08/2026






#include <iostream>
using namespace std;

int main()
{
    int number;

    // Ask the user to enter a number
    cout << "Enter a number from 1 to 12? ";
    cin >> number;

    // Validate the user's input
    while (number < 1 || number > 12)
    {
        cout << "Invalid number. Please enter a number from 1 to 12: ";
        cin >> number;
    }

    // Print the multiplication table
    int count = 1;

    while (count <= 12)
    {
        cout << number << " times " << count << " is "
             << number * count << "." << endl;

        count++;
    }

    return 0;
}