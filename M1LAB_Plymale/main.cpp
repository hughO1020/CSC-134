// CSC 134
// M1LAB -  apple sales
// plymaleh
// 8/26/26
// calculate apple prices

#include <iostream>

using namespace std;

int main()
{
    // Introduce yourself

    string name = "Plymale"; // your own name here  // string is a list of names
    string product = "apple"; // feel free to change

    cout << "Welcome to the " << name << " ";
    cout << product << " farm." << endl;

    // Do product price calculations
    int product_count = 100;   // int is for whole numbers
    double product_price = 1.25;  // in USD  // double is for decimals

    cout << "We have " << product_count << " ";
    cout << product << "(s) . They are $" << product_price;
    cout << " each." << endl;

    double total_price =  product_count * product_price;
    cout << "Total price for all " << product_count;
    cout << " is: $" << total_price << endl;


    return 0;
}
