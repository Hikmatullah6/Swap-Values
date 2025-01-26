/*
Hikmatullah Hussain Zada
Student number: 0761906
COIS 2040 Assignment 1
*/

// Libraries
#include <iostream>
#include <limits>
using namespace std;

// Swap function
void swap(int &a, int &b)
{
    int temp = a; // Set temp to the value a
    a = b;        // Set a to the value b
    b = temp;     // Set b to the value temp
}

// Main program
int main()
{
    // Declare variables
    int num1, num2;
    bool valid = false; // This variable is for the while loop to check user input

    // Run while loop until the user input is valid
    while (!valid)
    {
        // Ask user to input the values for the first and second number
        cout << "Enter the value of the first number: ";
        cin >> num1;
        cout << "Enter the value of the second number: ";
        cin >> num2;

        // Check if user input is valid
        if (num1 >= 0 && num2 >= 0 && cin.good())
        {
            // If valid, end loop
            valid = true;
        }
        else
        {
            // Tell the user the input is invalid
            cout << "Invalid input, please try again.\n";
            cin.clear();                                         // Reset the buffer's state
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Empty it to avoid infinite loop
        }
    }

    // Print the numbers before swapping
    cout << "\nBefore swapping the values: \nFirst number: " << num1 << "\nSecond number: " << num2 << endl;

    // Swap the numbers
    swap(num1, num2);

    // Print the numbers after swapping
    cout << "\nAfter swapping the values: \nFirst number: " << num1 << "\nSecond number: " << num2 << endl;

    return 0;
}