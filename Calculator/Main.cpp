#include <iostream> // Pre-Processor directive - Header file for including iostream file needed to run the program later on
#include <conio.h>
using namespace std; // Standard Library 

//+++++++++++Reusable Calculator+++++++++++++++//


int main() // Functions - Things you want the computer to do Computer always starts at main // Functions are made up of statements
{
  


    float a, b;
    float result;
    string invalid_operator_message = "Invalid Operator";
    char operation;

    cout << "Enter the first number: ";
    cin >> a;

    cout << "Enter the second number: ";
    cin >> b;

    do {
        cout << "Type the operation (+, -, *, /): ";
        cin >> operation;

        if (operation == '+' || operation == '-' || operation == '*' || operation == '/') {
            // Perform the calculation based on the valid operator
            if (operation == '+') {
                result = a + b;
            }
            else if (operation == '-') {
                result = a - b;
            }
            else if (operation == '*') {
                result = a * b;
            }
            else if (operation == '/') {
                // Handle division by zero
                if (b == 0) {
                    cout << "Error: Cannot divide by zero." << endl;
                }
                else {
                    result = a / b;
                }
            }
            // Only print the result if a valid calculation was performed
            if (operation != '/' || b != 0) {
                cout << result << endl;
            }
        }
        else {
            cout << invalid_operator_message << endl;
        }
    } while (true);

    return 0;
}






















  

