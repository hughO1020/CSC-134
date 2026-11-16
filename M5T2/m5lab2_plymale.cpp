// CSC 134
// M5LAB2 - Complete a Program
// Hugh Plymale
// 11/16/2026

#include <iostream>
#include <iomanip>
using namespace std;

// Function prototypes
double getLength();
double getWidth();
double getArea(double length, double width);
void displayData(double length, double width, double area);

int main()
{
    // Get the length and width from the user
    double length = getLength();
    double width = getWidth();

    // Calculate the area
    double area = getArea(length, width);

    // Display the results
    displayData(length, width, area);

    return 0;
}

// Get the rectangle's length
double getLength()
{
    double length;

    cout << "Enter the rectangle's length: ";
    cin >> length;

    return length;
}

// Get the rectangle's width
double getWidth()
{
    double width;

    cout << "Enter the rectangle's width: ";
    cin >> width;

    return width;
}

// Calculate and return the area
double getArea(double length, double width)
{
    double area = length * width;

    return area;
}

// Display the rectangle information
void displayData(double length, double width, double area)
{
    cout << endl;
    cout << "----- Rectangle Information -----" << endl;

    cout << fixed << setprecision(2);

    cout << "Length: " << length << endl;
    cout << "Width:  " << width << endl;
    cout << "Area:   " << area << endl;

    cout << "---------------------------------" << endl;
}