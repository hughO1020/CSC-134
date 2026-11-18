// CSC 134
// M6BONUS1 - Using Data Structures
// Hugh Plymale
// 11/16/2026
//
// AI Assistance: ChatGPT
// Prompt: Help me create a beginner-friendly C++ text adventure
// using enums, parallel arrays, and a 2D adjacency array.

#include <iostream>
#include <string>
using namespace std;

// Directions the player can move
enum Direction {
    NORTH,
    EAST,
    SOUTH,
    WEST,
    DIRECTION_COUNT
};

// Different rooms in the house
enum Room {
    ENTRANCE,
    LIVING_ROOM,
    KITCHEN,
    LIBRARY,
    BASEMENT,
    ROOM_COUNT
};

// Display information about the current room
void showRoom(int room, string roomNames[],
              string roomDescriptions[], string roomObjects[]) {

    cout << "\n============================\n";
    cout << roomNames[room] << endl;
    cout << "============================\n";

    cout << roomDescriptions[room] << endl;
    cout << "\nYou notice: " << roomObjects[room] << endl;
}

// Main program
int main() {

    // Parallel arrays containing room information
    string roomNames[ROOM_COUNT] = {
        "Front Entrance",
        "Living Room",
        "Kitchen",
        "Library",
        "Basement"
    };

    string roomDescriptions[ROOM_COUNT] = {
        "You stand inside the front entrance of an old abandoned house.",
        "An old couch sits in the middle of the room. Dust covers everything.",
        "The kitchen has broken cabinets and an old refrigerator.",
        "Books are scattered across the floor. A strange key sits on a desk.",
        "The basement is dark and cold. Something feels wrong down here."
    };

    string roomObjects[ROOM_COUNT] = {
        "A broken front door.",
        "An old fireplace.",
        "A refrigerator that will not open.",
        "An old desk and a rusty key.",
        "A strange locked box."
    };

    // Adjacency list showing which rooms connect
    // Order: NORTH, EAST, SOUTH, WEST
    int connections[ROOM_COUNT][DIRECTION_COUNT] = {
        {LIVING_ROOM, KITCHEN, -1, -1},
        {-1, LIBRARY, ENTRANCE, -1},
        {-1, ENTRANCE, BASEMENT, -1},
        {-1, -1, -1, LIVING_ROOM},
        {KITCHEN, -1, -1, -1}
    };

    // Direction names
    string directionNames[DIRECTION_COUNT] = {
        "north", "east", "south", "west"
    };

    int currentRoom = ENTRANCE;
    bool hasKey = false;
    string command;

    cout << "=================================\n";
    cout << "       THE ABANDONED HOUSE\n";
    cout << "=================================\n";

    cout << "\nYou have entered an abandoned house.";
    cout << "\nYour goal is to explore the rooms and find out";
    cout << "\nwhat happened inside.\n";

    showRoom(currentRoom, roomNames, roomDescriptions, roomObjects);

    // Main game loop
    while (true) {

        cout << "\nWhat would you like to do?";
        cout << "\nCommands: north, east, south, west";
        cout << "\nOther commands: look, inspect, take, inventory, quit";
        cout << "\nEnter command: ";

        cin >> command;

        // Quit the game
        if (command == "quit") {
            cout << "\nYou leave the abandoned house. Goodbye!\n";
            break;
        }

        // Look around the current room
        else if (command == "look") {
            showRoom(currentRoom, roomNames,
                     roomDescriptions, roomObjects);
        }

        // Inspect objects
        else if (command == "inspect") {
            cout << "\nYou inspect the room carefully.\n";
            cout << roomObjects[currentRoom] << endl;

            if (currentRoom == LIBRARY) {
                cout << "The rusty key looks like it might open something.\n";
            }

            if (currentRoom == BASEMENT) {
                cout << "The locked box has a small keyhole.\n";
            }
        }

        // Pick up the key
        else if (command == "take") {

            if (currentRoom == LIBRARY && !hasKey) {
                hasKey = true;
                cout << "\nYou picked up the rusty key!\n";
            }
            else if (hasKey) {
                cout << "\nYou already have the key.\n";
            }
            else {
                cout << "\nThere is nothing useful to take here.\n";
            }
        }

        // Check inventory
        else if (command == "inventory") {

            if (hasKey) {
                cout << "\nInventory: Rusty Key\n";
            }
            else {
                cout << "\nYour inventory is empty.\n";
            }
        }

        // Move between rooms
        else {

            int direction = -1;

            if (command == "north" || command == "n") {
                direction = NORTH;
            }
            else if (command == "east" || command == "e") {
                direction = EAST;
            }
            else if (command == "south" || command == "s") {
                direction = SOUTH;
            }
            else if (command == "west" || command == "w") {
                direction = WEST;
            }

            if (direction != -1) {

                int nextRoom = connections[currentRoom][direction];

                if (nextRoom == -1) {
                    cout << "\nYou cannot go that direction.\n";
                }

                // Require the key to enter the basement
                else if (nextRoom == BASEMENT && !hasKey) {
                    cout << "\nThe basement door is locked.";
                    cout << "\nYou need to find a key first.\n";
                }

                else {
                    currentRoom = nextRoom;

                    cout << "\nYou move " << directionNames[direction] << ".\n";

                    showRoom(currentRoom, roomNames,
                             roomDescriptions, roomObjects);

                    // Special basement ending
                    if (currentRoom == BASEMENT) {
                        cout << "\nYou use the rusty key to unlock the box.";
                        cout << "\nInside, you discover an old photograph.";
                        cout << "\nIt shows the house before it was abandoned.";
                        cout << "\nYou have discovered the secret of the house!\n";
                    }
                }
            }
            else {
                cout << "\nI do not understand that command. Try again.\n";
            }
        }
    }

    return 0;
}