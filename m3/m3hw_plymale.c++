/*
 * CSC 134
 * M3HW1 - Gold
 * Name: Hugh Plymale
 * Date: October 12, 2026
 *
 * This program completes all four questions:
 * Question 1: Simple Chatbot
 * Question 2: Restaurant Receipt Calculator
 * Question 3: Choose Your Own Adventure
 * Question 4: Math Practice
 */

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
#include <string>
using namespace std;

int main()
{
    // Question 1: Simple Chatbot

    cout << "QUESTION 1: CHATBOT" << endl;

    string answer;

    cout << "Hello, I'm a C++ program!" << endl;
    cout << "Do you like me? Please type yes or no." << endl;
    cin >> answer;

    if (answer == "yes")
    {
        cout << "That's great! I'm sure we'll get along." << endl;
    }
    else if (answer == "no")
    {
        cout << "Well, maybe you'll learn to like me later." << endl;
    }
    else
    {
        cout << "If you're not sure... that's OK." << endl;
    }

    cout << endl;


    // Question 2: Restaurant Receipt Calculator

    cout << "QUESTION 2: RECEIPT CALCULATOR" << endl;

    double mealPrice;
    double taxRate = 0.07;
    double taxAmount;
    double tipAmount = 0.00;
    double totalAmount;
    int orderType;

    cout << "Enter the price of the meal: $";
    cin >> mealPrice;

    cout << "Enter 1 for dine in or 2 for takeaway: ";
    cin >> orderType;

    taxAmount = mealPrice * taxRate;

    if (orderType == 1)
    {
        tipAmount = mealPrice * 0.15;
    }
    else if (orderType == 2)
    {
        tipAmount = 0.00;
    }
    else
    {
        cout << "Invalid order type. No tip was added." << endl;
    }

    totalAmount = mealPrice + taxAmount + tipAmount;

    cout << endl;
    cout << fixed << setprecision(2);
    cout << "========== RECEIPT ==========" << endl;
    cout << "Meal price:  $" << mealPrice << endl;
    cout << "Tax (7%):    $" << taxAmount << endl;
    cout << "Tip:         $" << tipAmount << endl;
    cout << "-----------------------------" << endl;
    cout << "Total due:   $" << totalAmount << endl;
    cout << "=============================" << endl;

    cout << endl;


    // Question 3: Choose Your Own Adventure

    cout << "QUESTION 3: ADVENTURE GAME" << endl;

    int firstChoice;
    int secondChoice;

    cout << "You wake up in a mysterious forest." << endl;
    cout << "You see a path leading into the forest and a river." << endl;
    cout << "What do you do?" << endl;
    cout << "1. Follow the forest path" << endl;
    cout << "2. Jump into the river" << endl;
    cout << "Enter your choice: ";
    cin >> firstChoice;

    if (firstChoice == 1)
    {
        cout << "You follow the path and find an old castle." << endl;
        cout << "You see a locked door and a ladder to a tower." << endl;
        cout << "What do you do?" << endl;
        cout << "1. Open the locked door" << endl;
        cout << "2. Climb the ladder" << endl;
        cout << "Enter your choice: ";
        cin >> secondChoice;

        if (secondChoice == 1)
        {
            cout << "You discover a room full of treasure!" << endl;
            cout << "Congratulations! YOU WIN!" << endl;
        }
        else if (secondChoice == 2)
        {
            cout << "The ladder breaks and you fall into a trap." << endl;
            cout << "GAME OVER!" << endl;
        }
        else
        {
            cout << "Invalid choice. Your adventure ends." << endl;
        }
    }
    else if (firstChoice == 2)
    {
        cout << "The river current is too strong!" << endl;
        cout << "You cannot escape. GAME OVER!" << endl;
    }
    else
    {
        cout << "Invalid choice. Your adventure ends." << endl;
    }

    cout << endl;


    // Question 4: Math Practice

    cout << "QUESTION 4: MATH PRACTICE" << endl;

    srand(static_cast<unsigned int>(time(0)));

    int numberOne = rand() % 10;
    int numberTwo = rand() % 10;
    int correctAnswer = numberOne + numberTwo;
    int userAnswer;

    cout << "What is " << numberOne << " plus "
         << numberTwo << "?" << endl;

    cin >> userAnswer;

    if (userAnswer == correctAnswer)
    {
        cout << "Correct!" << endl;
    }
    else
    {
        cout << "Incorrect." << endl;
        cout << "The correct answer is "
             << correctAnswer << "." << endl;
    }

    cout << endl;
    cout << "Thank you for running M3HW1!" << endl;

    return 0;
}