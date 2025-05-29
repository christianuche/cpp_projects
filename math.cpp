#include <iostream>
#include <string>

using namespace std;

int main() {
    // Declare variables to store user input
    string name;
    int age;
    double favoriteNumber;

    // Collect user input
    cout << "Enter your name: ";
    getline(cin, name);  // Allows spaces in name

    cout << "Enter your age: ";
    cin >> age;

    cout << "Enter your favorite number: ";
    cin >> favoriteNumber;

    // Use the input to create output and perform a calculation
    cout << "\nHello, " << name << "!" << endl;
    cout << "In 5 years, you will be " << (age + 5) << " years old." << endl;
    cout << "Your favorite number multiplied by 10 is: " << (favoriteNumber * 10) << endl;

    return 0;
}
