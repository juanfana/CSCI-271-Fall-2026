Assignment3

#include <iostream>
using namespace std;

int main()
{
    //Declaring with no values so they can later take on inputed values
    int age;
    int isMember;
//Message display + user input of their age
    cout << "Enter your age: ";
    cin >> age;
//Memberhsip verification and user inputed answer
    cout << "Are you a member? (1 = yes, 0 = no): ";
    cin >> isMember;
//Age verification that connects to membership verification process
    if (age >= 60 || (age >= 18 && isMember == 1))
    {
        cout << "You qualify for the discount.";
    }
//Conditional statement that follows up the analysis of the first condition
    else
    {
        cout << "You do not qualify for the discount.";
    }
//Closing out the program
    return 0;
}