// CSC 134
// M5HW1
// Hugh Plymale
// 11/16/2026

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

// Function prototypes
void question1();
void question2();
void question3();
void question4();
void question5();

int main()
{
    int choice = 0;

    while (choice != 6)
    {
        cout << endl;
        cout << "CSC 134 M5HW1 Menu" << endl;
        cout << "1. Average Rainfall" << endl;
        cout << "2. Block Volume" << endl;
        cout << "3. Roman Numerals" << endl;
        cout << "4. Geometry Calculator" << endl;
        cout << "5. Distance Traveled" << endl;
        cout << "6. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1)
        {
            question1();
        }
        else if (choice == 2)
        {
            question2();
        }
        else if (choice == 3)
        {
            question3();
        }
        else if (choice == 4)
        {
            question4();
        }
        else if (choice == 5)
        {
            question5();
        }
        else if (choice == 6)
        {
            cout << "Goodbye!" << endl;
        }
        else
        {
            cout << "Invalid choice. Enter a number from 1 through 6." << endl;
        }
    }

    return 0;
}

// Question 1 - Average Rainfall
void question1()
{
    string month1, month2, month3;
    double rain1, rain2, rain3;
    double average;

    cout << "Enter month: ";
    cin >> month1;
    cout << "Enter rainfall for " << month1 << ": ";
    cin >> rain1;

    cout << "Enter month: ";
    cin >> month2;
    cout << "Enter rainfall for " << month2 << ": ";
    cin >> rain2;

    cout << "Enter month: ";
    cin >> month3;
    cout << "Enter rainfall for " << month3 << ": ";
    cin >> rain3;

    average = (rain1 + rain2 + rain3) / 3.0;

    cout << fixed << setprecision(2);
    cout << "The average rainfall for " << month1 << ", "
         << month2 << ", and " << month3
         << " is " << average << " inches." << endl;
}

// Question 2 - Block Volume
void question2()
{
    double width, length, height;
    double volume;

    cout << "Enter width: ";
    cin >> width;

    while (width <= 0)
    {
        cout << "Enter a width greater than zero: ";
        cin >> width;
    }

    cout << "Enter length: ";
    cin >> length;

    while (length <= 0)
    {
        cout << "Enter a length greater than zero: ";
        cin >> length;
    }

    cout << "Enter height: ";
    cin >> height;

    while (height <= 0)
    {
        cout << "Enter a height greater than zero: ";
        cin >> height;
    }

    volume = width * length * height;

    cout << "The volume of the block is " << volume << endl;
}

// Question 3 - Roman Numerals
void question3()
{
    int number;

    cout << "Enter a number (1 - 10): ";
    cin >> number;

    while (number < 1 || number > 10)
    {
        cout << "Enter a number between 1 and 10: ";
        cin >> number;
    }

    cout << "The Roman numeral version of " << number << " is ";

    switch (number)
    {
        case 1: cout << "I"; break;
        case 2: cout << "II"; break;
        case 3: cout << "III"; break;
        case 4: cout << "IV"; break;
        case 5: cout << "V"; break;
        case 6: cout << "VI"; break;
        case 7: cout << "VII"; break;
        case 8: cout << "VIII"; break;
        case 9: cout << "IX"; break;
        case 10: cout << "X"; break;
    }

    cout << endl;
}

// Question 4 - Geometry Calculator
void question4()
{
    int choice;
    double radius, length, width, base, height;
    double area;
    const double PI = 3.14159;

    cout << endl;
    cout << "Geometry Calculator" << endl;
    cout << "1. Calculate the Area of a Circle" << endl;
    cout << "2. Calculate the Area of a Rectangle" << endl;
    cout << "3. Calculate the Area of a Triangle" << endl;
    cout << "4. Quit" << endl;
    cout << "Enter your choice (1-4): ";
    cin >> choice;

    while (choice < 1 || choice > 4)
    {
        cout << "The valid choices are 1 through 4. Try again: ";
        cin >> choice;
    }

    if (choice == 1)
    {
        cout << "Enter the circle's radius: ";
        cin >> radius;

        while (radius < 0)
        {
            cout << "The radius cannot be less than zero: ";
            cin >> radius;
        }

        area = PI * radius * radius;
        cout << "The area is " << area << endl;
    }
    else if (choice == 2)
    {
        cout << "Enter the rectangle's length: ";
        cin >> length;

        while (length < 0)
        {
            cout << "Enter a positive length: ";
            cin >> length;
        }

        cout << "Enter the rectangle's width: ";
        cin >> width;

        while (width < 0)
        {
            cout << "Enter a positive width: ";
            cin >> width;
        }

        area = length * width;
        cout << "The area is " << area << endl;
    }
    else if (choice == 3)
    {
        cout << "Enter the triangle's base: ";
        cin >> base;

        while (base < 0)
        {
            cout << "Enter a positive base: ";
            cin >> base;
        }

        cout << "Enter the triangle's height: ";
        cin >> height;

        while (height < 0)
        {
            cout << "Enter a positive height: ";
            cin >> height;
        }

        area = base * height * 0.5;
        cout << "The area is " << area << endl;
    }
    else
    {
        cout << "Returning to the main menu." << endl;
    }
}

// Question 5 - Distance Traveled
void question5()
{
    double speed;
    int hours;

    cout << "What is the speed of the vehicle in mph? ";
    cin >> speed;

    while (speed < 0)
    {
        cout << "Speed cannot be negative. Enter again: ";
        cin >> speed;
    }

    cout << "How many hours has it traveled? ";
    cin >> hours;

    while (hours < 1)
    {
        cout << "Enter at least 1 hour: ";
        cin >> hours;
    }

    cout << endl;
    cout << "Hour     Distance Traveled" << endl;
    cout << "--------------------------" << endl;

    for (int count = 1; count <= hours; count++)
    {
        cout << count << "        " << speed * count << endl;
    }
}