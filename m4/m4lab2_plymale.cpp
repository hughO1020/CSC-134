// CSC 134
// M4 Lab 1
// plymaleh
// 10/12/26


#include <iostream>
using namespace std;

int main() {
    string token = "$"; // use any character you want
    
    int width, height;

    cout << "Enter rectangle width: ";
    cin >> width;
    cout << "Enter rectangle height: ";
    cin >> height; 




    cout << "Part 1" << endl;
    const int WIDTH = 5;
    const int HEIGHT = 5;


    // First part: Printing one row
    for (int i = 0; i < WIDTH; i++) {
        cout << token << " "; // adding a space


    }
    cout << endl;

    cout << "Part 2" << endl;
    // Next part: printing one column
    for (int j = 0; j < HEIGHT; j++) {
        cout << token << endl;
    }

    cout << "Here is your rectangle " << width << " by " << height << endl;
    // full rectangle print height number of rows
    // each row is width long
    for (int j = 0; j < height; j++){
        // draw one full row
        for (int i = 0; i < width; i++){
            cout << token << " ";

        }
        cout << endl;
    }

}