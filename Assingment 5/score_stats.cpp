// Juan Fana Assignment5 
#include <iostream> // Lets you use cin and cout.
using namespace std; // Allows using cin and cout without having to put std:: in front.
int main() { // where every program starts.
    const int SIZE = 5; // sets value that cant be changed (to my understanding).
    int scores[SIZE]; // array that Stores five test scores.
    int sum = 0; // Starts the total at zero.
    for (int i = 0; i < SIZE; i++) { // Goes through each score position.
        cout << "Enter score " << i + 1 << ": "; // Asks user for a score input.
        cin >> scores[i]; // Stores the inputed score in the array.
    } // Ends the input loop.
    int highest = scores[0]; // Starts the highest at the first score.
    int lowest = scores[0]; // Starts lowest at the first score.
    for (int i = 0; i < SIZE; i++) { //loop that Checks every score.
        sum += scores[i]; // Adds the score to the total.
        if (scores[i] > highest) { // this if statement Checks for a higher score.
            highest = scores[i]; // Saves the new highest score.
        } // Ends the highest check.
        if (scores[i] < lowest) { // does inverse of the statement above.
            lowest = scores[i]; // Saves the new lowest score.
        } // Ends the lowest check.
    } // Ends the statistics loop.
    double average = static_cast<double>(sum) / SIZE; // Calculates decimal average.
    cout << "Scores: "; // Prints the scores label.
    for (int i = 0; i < SIZE; i++) { // Goes through the array.
        cout << scores[i] << " "; // Prints each score on one line.
    } // Ends the printing loop.
    cout << endl; // Moves to the next line.
    cout << "Sum: " << sum << endl; // Prints the total.
    cout << "Average: " << average << endl; // Prints the average.
    cout << "Highest: " << highest << endl; // Prints the highest score.
    cout << "Lowest: " << lowest << endl; // Prints the lowest score.
    return 0; // Ends the program successfully.
} // Ends main.
