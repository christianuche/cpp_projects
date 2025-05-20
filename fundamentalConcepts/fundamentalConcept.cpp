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
    cout << "Hello, World!" << endl; //see out

    // Variables and data types
    int age = 30;
    double price = 99.99;
    char initial = 'J';
    string name = "John Doe";
    bool isHappy = true;

    cout << "Name: " << name << ", Age: " << age << endl;

    // Arithmetic operations
    int num1 = 20, num2 = 10;
    cout << "Sum: " << num1 + num2 << ", Difference: " << num1 - num2 << endl;
    cout << "Product: " << num1 * num2 << ", Quotient: " << num1 / num2 << endl;

    // Conditional statements
    if (age >= 18) {
        cout << "Adult" << endl;
    } else {
        cout << "Minor" << endl;
    }

    // Loops
    for (int i = 0; i < 5; i++) {
        cout << "Number: " << i << endl;
    }

    int counter = 0;
    while (counter < 3) { 
        cout << "Count: " << counter << endl;
        counter++;
    }

    // Vectors (dynamic arrays)
    vector<int> numbers = {1, 2, 3, 4, 5};
    numbers.push_back(7); // Adds element to the vector


    for (int num : numbers) {
        cout << num << " ";
    }
    cout << endl;

    // String manipulation
    string message = "Hello";
    message += ", C++";
    cout << message << endl;

    // Functions
    double area = circleArea(5.0);
    cout << "Circle Area: " << area << endl;

     // Using max function
    int maximum = maxOfTwo(15, 8);
    cout << "The maximum number is: " << maximum << endl;

    // Switch statement
    int day = 2;
    switch (day) {
        case 1: cout << "Monday" << endl; break;
        case 2: cout << "Tuesday" << endl; break;
        case 3: cout << "Wednesday" << endl; break;
        default: cout << "Other day" << endl;
    }
    
    // Sorting a vector
    sort(numbers.begin(), numbers.end());
    cout << "Sorted numbers: ";
    for (int num : numbers) {
        cout << num << " ";
    }
    cout << endl;

    // Basic exception handling
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