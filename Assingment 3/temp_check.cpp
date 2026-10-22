Assignment3

#include <iostream>
using namespace std;

int main()
{
    //Declare this integer with no value so it can hold an inputed value
    int temperature;
//Output of declared int but with (F)added to indicate temperature scale
    cout << "Enter the temperature (F): ";
//user input of temperature in number vale    
    cin >> temperature;
// condition to check user input 
    if (temperature < 32)
    {
        cout << "That's Freezing.";
    }
//conditional statements used to check back with the user input 
    else if (temperature <= 59)
    {
        cout << "That's Cold.";
    }
    else if (temperature <= 75)
    {
        cout << "That's Mild.";
    }
    else
    {
        cout << "That's Hot.";
    }
//closing out our program
    return 0;
}