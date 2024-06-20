#include <iostream>
#include <string>

using namespace std;

// Function to unlock all weapons
void unlockAllWeapons() {
    cout << "Unlocking all weapons..." << endl;
    // Add code to unlock all weapons here
}

// Function to give infinite money
void infiniteMoney() {
    cout << "Giving infinite money..." << endl;
    // Add code to give infinite money here
}

// Function to unlock all vehicles
void unlockAllVehicles() {
    cout << "Unlocking all vehicles..." << endl;
    // Add code to unlock all vehicles here
}

// Function to unlock the Gnome Outfit
void unlockGnomeOutfit() {
    cout << "Unlocking the Gnome Outfit..." << endl;
    // Add code to unlock the Gnome Outfit here
}

int main() {
    int choice;
    cout << "Watch Dogs 2 Cheat Menu" << endl;
    cout << "------------------------" << endl;
    cout << "1. Unlock all weapons" << endl;
    cout << "2. Give infinite money" << endl;
    cout << "3. Unlock all vehicles" << endl;
    cout << "4. Unlock the Gnome Outfit" << endl;
    cout << "5. Exit" << endl;
    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice) {
        case 1:
            unlockAllWeapons();
            break;
        case 2:
            infiniteMoney();
            break;
        case 3:
            unlockAllVehicles();
            break;
        case 4:
            unlockGnomeOutfit();
            break;
        case 5:
            cout << "Exiting..." << endl;
            return 0;
        default:
            cout << "Invalid choice. Please try again." << endl;
            break;
    }

    return 0;
}