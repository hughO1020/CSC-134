// csc 134
//M3T1 - comparing areas
//plymaleh
// 9/21/2026
// get area of two rectangles, find the largest one


#include <iostream>
using namespace std;

int main() {
    // declare variables for each rectangle
    double length1, width1, area1;
    double length2, width2, area2;

    //input; ask for length and width of both
    cout << "First rectangle:" << endl;
    cout << "\tlength ? ";
    cin  >> length1;
    cout << "\twidth ? ";
    cin >> width1;
    
    cout << "2nd rectangle:" << endl;
    cout << "\tlength ? ";
    cin  >> length2;
    cout << "\twidth ? ";
    cin >> width2;
    //calculation: find area of both
    area1 = length1 * width1;
    area2 = length2 * width2;


    //output: pring the areas
    cout << "Rectangle 1 is area: " << area1 << endl;
    cout << "Rectangle 2 is area: " << area2 << endl;

    //TODO: tell the user which one is larger
    if (area1 > area2) {
        cout << "Rectangle 1 is larger." << endl;
    }
    else if (area2 > area1) {
        cout << "Rectangle 2 is larger." << endl;
    }
    else {
        cout << "They are the same size." << endl;
    }
    return 0;
}