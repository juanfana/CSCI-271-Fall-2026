// Juan Fana Assignment5

#include <iostream> // lets you use cin and cout.
using namespace std; // Uses cin and cout directly without ::std.
int main() { // Starts the program.
    const int SIZE = 10; // Sets the fixed array size.
    int data[SIZE] = {7, 12, 5, 12, 40, 3, 12, 8, 21, 5}; // Stores the created arrays values.
    int target; // Holds the number to search for.
    int foundIndex = -1; // for when no match has been found yet.
    int count = 0; // Counts the number of matches.
    cout << "Enter a number to search for: "; // Requests the user to type a target.
    cin >> target; // Reads the target number.
    for (int i = 0; i < SIZE; i++) { // Searches every arraycelement.
        if (data[i] == target) { // Checks whether the element matches.
            count++; // Counts this occurrence.
            if (foundIndex == -1) { // Checks whether this is the first match.
                foundIndex = i; // Saves only the first matching index.
            } // Ends the first-match check.
        } // Ends the matching check.
    } // Ends the search loop.
    if (foundIndex != -1) { // statement that Checks whether a match was found or not.
        cout << target << " first found at index " << foundIndex << endl; // Prints the first index.
        cout << target << " appears " << count << " time(s)" << endl; // Prints the count.
    } else { // statement that Runs when there are no matches.
        cout << target << " was not found." << endl; // Prints the not-found message.
    } // Ends the result check.
    return 0; // Ends the program successfully.
} // Ends main.
