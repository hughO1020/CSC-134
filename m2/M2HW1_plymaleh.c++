//
//csc 134
//M2HW1 - homework 
//plymaleh
//9/16/26

#include <iostream>
#include <iomanip>
using namespace std;


void question1();
void question2();
void question3();
void question4(); 


int main() {
question1();
question2();
//question3();
//question4();
}
void question1() {
    cout << "What's your name?" << endl;
}

void question2() {

    // Declare constants and variables
    const double COST_PER_CUBIC_FOOT = 0.30;
    const double CHARGE_PER_CUBIC_FOOT = 0.52;
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

}



void question3(){
    cout << "Question 3 goes here" << endl;
}

void question4(){
    cout << "Question 4 goes here" << endl;



}

