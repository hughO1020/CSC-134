//CSC 134
// M2T1 - Recipet
// plymaleh
// 9/14/26
// builda receipt that looks like a receipt


#include <iostream>
#include <iomanip>
using namespace std;

int main() {

    //Declare variables
    string meal_name;  // ex: chx sandwhich
    double meal_price;  //$
    double tax_rate;    // percent
    double tax_amount;  //$
    double total;       // $, meal + tax


    //INPUT
    // Right now, nothing. They pick exactly one sandwhich.
    // For now, hard code some values
    meal_name = "Chicken Sandwhich"; // pick your own if you want
    meal_price = 5.99;
    tax_rate  = 0.08;


    //Processing
    // tax $ is the meal $ times the tax rate
    tax_amount = meal_price * tax_rate;
    total  = meal_price + tax_amount;


    //Output
    string line = "-----------------------------------------------";
    cout << line << endl;
    cout << setprecision(2) << fixed;
    cout << setw(20) << meal_name << setw(10) << meal_price << endl;
    cout << setw(20) << " tax: " << setw(10) << " " << tax_amount << endl;
    cout << line << endl;
    cout << setw(20) << "Total: " << setw(10) << total << endl;
    cout << "Thank You Come Again" << endl << endl;


    return 0; // no errors
}