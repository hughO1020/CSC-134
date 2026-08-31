// CSC 134
/*
M1H1 - Movie Talk
Plymale, H
8/31/2026
*/




#include <iostream>
using namespace std;

// Starting point
int main() {

    // Purpose: Practice using string, int, and double within natural text.
    // Declare variables
    string movie_name;     // Film Title as in IMDB
    int    movie_year;     // year of release
    double movie_gross;   //millions of dollars of the gross

    
    movie_name = "Pirates of the Caribbean";
    movie_year = 2003;
    movie_gross = 654.3;

    //print the movie blurp
    cout<< "The movie " << movie_name << " came out in " << movie_year << "." << endl;

    cout << "It grossed in total $" << movie_gross << " million." << endl;

    cout << "QUOTE:" << "\"This is the day you will always remember as the day you almost caught Captain Jack Sparrow!\" " << endl;

    return 0; // no errors
}
