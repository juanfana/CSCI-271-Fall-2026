// Juan Fana Assignment5

#include <iostream> // Allows you to use cin and cout.
using namespace std; // Uses cin and cout directly wihtout ::std.
void printForward(const int arr[], int size); // Declares the forward-print function.
void printReverse(const int arr[], int size); // Declares the reverse-print function.
int countAbove(const int arr[], int size, int limit); // Declares the counting function.
int main() { // Starts the program.
    const int SIZE = 6; // Sets the array size.
    int values[SIZE] = {14, 3, 27, 9, 50, 21}; // Stores the arrays values.
    int limit; // Holds the user's limit.
    cout << "Forward: "; // Prints the forward label.
    printForward(values, SIZE); // Prints the values in order.
    cout << "Reverse: "; // Prints the reverse label.
    printReverse(values, SIZE); // Prints the values in reverse.
    cout << "Count values above: "; // Asks for the limit.
    cin >> limit; // Reads the limit.
    cout << "Count: " << countAbove(values, SIZE, limit) << endl; // Prints the result.
    return 0; // Ends the program successfully.
} // Ends main.
void printForward(const int arr[], int size) { // Defines the forward function.
    for (int i = 0; i < size; i++) { // loop that Visits indices from first to last.
        cout << arr[i] << " "; // Prints the current value.
    } // Ends the forward loop.
    cout << endl; // Moves to the next line.
} // Ends the forward function.
void printReverse(const int arr[], int size) { // Defines the reverse function.
    for (int i = size - 1; i >= 0; i--) { // loop that Visits indices from last to first.
        cout << arr[i] << " "; // Prints the current value.
    } // Ends the reverse loop.
    cout << endl; // Moves to the next line.
} // Ends the reverse function.
int countAbove(const int arr[], int size, int limit) { // Defines the counting function.
    int count = 0; // Starts the count at zero.
    for (int i = 0; i < size; i++) { // loop that Checks each array element.
        if (arr[i] > limit) { // statement that Checks whether the value exceeds the limit.
            count++; // Counts a value above the limit.
        } // Ends the condition.
    } // Ends the counting loop.
    return count; // Sends the count back to main.
} // Ends the counting function.
