
// 09/28/2026
//csc-134
// plymaleh

#include <iostream>
using namespace std;


void chooseDoor1();
void chooseDoor2();
void chooseDoor3();



int main(){

    int choice;

    cout << "Do you choose Door 1, 2 or 3?" << endl;
    cout << "1. Choose Door #1" << endl;
    cout << "2. Choose Door #2" << endl;
    cout << "3. Choose Door #3" << endl;
    cout << "? ";
    cin >> choice;
    if (1 == choice){
        chooseDoor1();
    }

    else if (2 == choice){
        chooseDoor2();
    }

    else if (3 == choice) {

         chooseDoor3();
    }

    else {
        cout << "I'm sorry, that is not a valid choice." << endl;

    }

    cout << "Thank you for playing!" << endl;
    return 0;

}

void chooseDoor1() {

    cout << "You choose Door1" << endl;
    cout << "You win ... A NEW CAR!" << endl;

}

void chooseDoor2() {

    cout << "You choose Door 2" << endl;
    cout << "You win ... a bottle of floor wax." << endl;
}

void chooseDoor3() {

    cout << "You choose Door 3" << endl;
    cout << "You win ... 3 MILLION DOLLARS!" << endl;
}