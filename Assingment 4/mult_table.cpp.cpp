//Juan Fana Assignment4

// helps us access to cin and cout.
#include <iostream> 
// Allows us to write cin and cout without std::.
using namespace std; 
//Start of program
int main() { 
// Creates empty integer variable for the user’s inputed number.
    int number; 
 // message that aks the user for a whole number.
    cout << "Enter a number: ";

    cin >> number; // Reads the number entered by the user.

    for (int i = 1; i <= 10; i++) { // Counter-controlled loop that goes from 1 through 10.

        cout << number << " x " << i << " = " << number * i << endl; // Prints one multiplication each pass.

    } // Ends the for loop we were using.

    return 0; // Ends the program.

} // Ends main.
