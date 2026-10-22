/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
    #include <iostream>
#include <string>
using namespace std;

int main() {
    //Declares a string variable named name that serves as container for users input of actual name
    string name;
    // Integer declared with name "age" for user input of age in numbers
    int age;
    //Asks user to enter name 
    cout << "Enter your name: ";
    //Stores name entered by user for final output
    cin >> name;
    //Asks user to enter their age
    cout << "Enter your age: ";
    // Stores the number inputed by user
    cin >> age;
   //Prints out final input which combines both UserName+UserAge and greeting.
    cout << "Hello, I am " << name << "! I am " << age << " years old." << endl;

    return 0;
}
