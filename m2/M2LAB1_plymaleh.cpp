// 9/16/2026
// CSC 134
//plymaleh

#include <iostream>
#include <iomanip>
using namespace std;

int main () {

    // Declare constants and variables
    const double COST_PER_CUBIC_FOOT = 0.23;
    const double CHARGE_PER_CUBIC_FOOT = 0.50;
    double length, width, height;
    double volume;
    double crate_cost;
    double crate_charge;
    double profit;


    // Get the dimensions of the crate
    cout << "Please enter the crate dimensions." << endl;
    cout << "Crate length: ";
    cin >> length;
    cout << "Crate height: ";
    cin >> height;
    cout << "Crate width: ";
    cin >> width;

    // calculate the volume
    volume = length * width * height;




    // calculate price and cost
    crate_cost = COST_PER_CUBIC_FOOT * volume;
    crate_charge = CHARGE_PER_CUBIC_FOOT * volume;



    // calculate profit (price - cost)
    profit = crate_charge  - crate_cost;



    // Display results to user
    cout << setprecision(2) << fixed;
    cout << "A crate measuring " << length << " x " << width << " x " << height << " x " << " ft. " << endl;
    cout << "Is volume: " << volume << "cubic ft." << endl;
    cout << endl;
    cout << "Cost to build: $" << crate_cost << endl;
    cout << "Sells for: $" << crate_charge << endl;
    cout << profit << endl;


    return 0; // no errors
}