/*
Hikmatullah Hussain Zada
Student number: 0761906
COIS 2040 Assignment 1
*/

// Libraries
#include <iostream>
using std::cout, std::cin, std::endl;

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

    // Ask user to input the values for the first and second number
    cout << "Enter the value of the first number: ";
    cin >> num1;
    cout << "Enter the value of the second number: ";
    cin >> num2;

    // Print the numbers before swapping
    cout << "Before swapping the values: num1 = " << num1 << ", num2 = " << num2 << endl;

    // Swap the numbers
    swap(num1, num2);

    // Print the numbers after swapping
    cout << "After swapping the values: num1 = " << num1 << ", num2 = " << num2 << endl;

    return 0;
}