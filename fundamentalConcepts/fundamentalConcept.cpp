#include <iostream>    // for input/output
#include <string>      // for using strings
#include <vector>      // for dynamic arrays (vectors)
#include <algorithm>   // for sort and other algorithms
#include <cmath>       // for math functions like M_PI and pow

using namespace std;   // avoids typing std:: before cout, string, etc.

// Calculates area of a circle using π * r^2
double circleArea(double radius) {
    return M_PI * radius * radius;
}

// Returns the larger of two integers
int maxOfTwo(int a, int b) {
    return (a > b) ? a : b;
}

int main() {
    // Basic output
    cout << "Hello, World!" << endl;

    // Collect user input
    string userName;
    int userAge;
    double favoriteNumber;

    cout << "Enter your name: ";
    getline(cin, userName);  // Allows spaces in name

    cout << "Enter your age: ";
    cin >> userAge;

    cout << "Enter your favorite number: ";
    cin >> favoriteNumber;

    // Use the input to create output and perform a calculation
    cout << "\nHello, " << userName << "!" << endl;
    cout << "In 5 years, you will be " << (userAge + 5) << " years old." << endl;
    cout << "Your favorite number multiplied by 10 is: " << (favoriteNumber * 10) << endl;

    // More variables and data types
    int age = 30;
    double price = 99.99;
    char initial = 'J';
    string name = "John Doe";
    bool isHappy = true;

    cout << "\nDemo variables:" << endl;
    cout << "Name: " << name << ", Age: " << age << ", Initial: " << initial << ", Price: " << price << ", Happy: " << isHappy << endl;

    // Arithmetic operations
    int num1 = 20, num2 = 10;
    cout << "\nArithmetic Operations:" << endl;
    cout << "Sum: " << num1 + num2 << ", Difference: " << num1 - num2 << endl;
    cout << "Product: " << num1 * num2 << ", Quotient: " << num1 / num2 << endl;

    // Conditional statements
    cout << "\nAge Check: ";
    if (age >= 18) {
        cout << "Adult" << endl;
    } else {
        cout << "Minor" << endl;
    }

    // For loop
    cout << "\nFor loop output:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "Number: " << i << endl;
    }

    // While loop
    cout << "\nWhile loop output:" << endl;
    int counter = 0;
    while (counter < 3) { 
        cout << "Count: " << counter << endl;
        counter++;
    }

    // Vectors
    vector<int> numbers = {1, 2, 3, 4, 5};
    numbers.push_back(7);  // Adds element to the vector

    cout << "\nVector elements: ";
    for (int num : numbers) {
        cout << num << " ";
    }
    cout << endl;

    // String manipulation
    string message = "Hello";
    message += ", C++";
    cout << "\nMessage: " << message << endl;

    // Functions
    double area = circleArea(5.0);
    cout << "Circle Area (radius 5): " << area << endl;

    int maximum = maxOfTwo(15, 8);
    cout << "Maximum of 15 and 8: " << maximum << endl;

    // Switch statement
    int day = 2;
    cout << "\nDay of the week: ";
    switch (day) {
        case 1: cout << "Monday" << endl; break;
        case 2: cout << "Tuesday" << endl; break;
        case 3: cout << "Wednesday" << endl; break;
        default: cout << "Other day" << endl;
    }

    // Sorting the vector
    sort(numbers.begin(), numbers.end());
    cout << "\nSorted numbers: ";
    for (int num : numbers) {
        cout << num << " ";
    }
    cout << endl;

    // Exception handling
    cout << "\nException handling demo: ";
    try {
        if (num2 == 0) {
            throw runtime_error("Division by zero!");
        }
        cout << num1 / num2 << endl;
    } catch (const runtime_error& error) {
        cerr << "Error: " << error.what() << endl;
    }

    return 0;
}
