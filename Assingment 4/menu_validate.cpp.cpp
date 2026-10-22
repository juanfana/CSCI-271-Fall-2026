//Juan Fana Assingment4

// Gives us access to cin and cout.
#include <iostream>
// Allows us to write cin and cout without std::.
using namespace std; 

int main() { // The program starts here.

// an integer variable for the menus choice.
    int choice; 
    do { // Starts the input-validation loop with one prompt.

        cout << "Enter a menu choice (1, 2, or 3): "; // tells the user to make a choice.

        cin >> choice; // Reads the user’s choice.

        if (choice != 1 && choice != 2 && choice != 3) { // Checks if the choice made by user is invalid.

            cout << "Invalid choice, try again." << endl; // Tells the user to try again if previous condition is true.

        } // Ends the if statement.

    } while (choice != 1 && choice != 2 && choice != 3); // Repeats while the user input is invalid.

    cout << "You selected option " << choice << "." << endl; // Prints the valid choice.

    return 0; // Ends the program.

} // Ends main.
