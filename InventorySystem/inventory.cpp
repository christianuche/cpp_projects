#include <iostream>
#include <vector>
#include <string>
#include <chrono>
#include <thread>
using namespace std;

// Here I have to create a class Item
class Item {
private: //This is used to hide implementation details and protect data from being changed in unsafe ways.
    string name;
    int quantity;
    double price;

/* In C++, private and public are access specifiers
that control who can access what inside a class.
They help implement encapsulation, 
which is a core concept in object-oriented programming (OOP). */

public:
    // Constructor
    Item(string n, int q, double p) : name(n), quantity(q), price(p) {}

    // Getters
    string getName() const {
        return name;
    }

    int getQuantity() const {
        return quantity;
    }

    double getPrice() const {
        return price;
    }

    // Setters
    void setQuantity(int q) {
        quantity = q;
    }

    void setPrice(double p) {
        price = p;
    }
};

// Function to display all items
void displayInventory(const vector<Item>& inventory) {
    cout << "\nInventory:\n";
    for (const auto& item : inventory) {
        cout << "Name: " << item.getName()
        << ", Quantity: " << item.getQuantity()
        << ", Price: $" << item.getPrice() << endl;
    }
}

// Main function
int main() {
    vector<Item> inventory;
    int choice;

    do {
        cout << "\nInventory Menu:\n";
        cout << "1. Add Item\n2. View Inventory\n3. Exit\nEnter your choice: ";
        cin >> choice;

        if (choice == 1) {
            string name;
            int quantity;
            double price;

            cout << "Enter item name: ";
            cin.ignore(); // clear newline from input buffer
            getline(cin, name);

            cout << "Enter quantity: ";
            cin >> quantity;

            cout << "Enter price: ";
            cin >> price;

            inventory.emplace_back(name, quantity, price);
            cout << "Item added successfully!\n";
        } else if (choice == 2) {
            displayInventory(inventory);
        } else if (choice != 3) {
            cout << "Invalid choice. Try again.\n";
        }
    } while (choice != 3);

    cout << "Exiting program.";
    for (int i = 0; i < 10; ++i) {
        cout << ".";
        cout.flush(); // Force flush to show the dot immediately
        this_thread::sleep_for(chrono::milliseconds(500)); // 0.5 second delay
    }

    cout << "\nGoodbye!\n";
    return 0;
}
