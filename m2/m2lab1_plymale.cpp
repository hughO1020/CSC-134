// CSC 134
//Hugh_Plymale
// 9/9/26
//Interactive program with input



#include <iostream>
using namespace std;

int main() {
    // SET UP VARIABLES
    string product_name;
    int    product_count;
    double product_price;  // $ usd, per item
    // variables for customer side
    int    purchase_count;
    double puechase_total;

    // get input
    cout << "STORE SETUP" << endl;
    cout << "Product_Name: ";
    cin  >> product_name;
    cout << "Item Count;  ";
    cin  >> product_count;
    cout << "Price Each:   $";
    cin  >> product_price;

    // get input -- greet user, get their order
    cout <<"------------------------" << endl << endl;
    cout << "WELCOME, CUSTOMER." << endl;
    cout << "Welcome to the " << product_name << " shop." << endl;
    cout << "Our " << product_name << "(s) are $" << product_price << " each." << endl;


    cout << "How many would you like to buy today?";

    purchase_total = purchase_count * product_price;

    //Print output
    cout << "You have ordered " << purchase_count << " " << product_name << "(s)." << endl;
    cout << "Total price: $" << purchase_total << endl;
    cout << "Thank you for shopping with CSC 134." << endl << endl;


    return 0;



    // DO THE PROCESSING
}