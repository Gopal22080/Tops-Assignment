#include <iostream>
#include <string>
using namespace std;

class FoodOrder {
private:
    string CustomerName;
    int choice, subChoice, quantity;
    float totalBill;

    string items[50];  
    int qty[50];       
    float price[50];   
    int orderCount;

public:
    // Constructor
    FoodOrder() {
        totalBill = 0.0;
        orderCount = 0;
    }

    // Customer Name
    void getCustomerName() {
        cout << "\nEnter your Name: ";
        getline(cin, CustomerName);
    }

    // Main Menu
    void showMenu() {
        cout << "\n========== MAIN MENU ==========\n";
        cout << "1. Pizza\n";
        cout << "2. Burger\n";
        cout << "3. Sandwich\n";
        cout << "4. Coffee\n";
        cout << "5. EXIT\n";
        cout << "================================\n";
    }

    // Submenus
    void pizzaMenu() {
        cout << "\n---- Pizza Menu ----\n";
        cout << "1. Margherita Pizza   - Rs. 250\n";
        cout << "2. Cheese Burst Pizza - Rs. 300\n";
        cout << "3. Paneer Tikka Pizza - Rs. 350\n";
        cout << "---------------------\n";
    }

    void burgerMenu() {
        cout << "\n---- Burger Menu ----\n";
        cout << "1. Veg Burger   - Rs. 120\n";
        cout << "2. Cheese Burger- Rs. 150\n";
        cout << "3. Crispy Burger- Rs. 180\n";
        cout << "---------------------\n";
    }

    void sandwichMenu() {
        cout << "\n---- Sandwich Menu ----\n";
        cout << "1. Club Sandwich       - Rs. 240\n";
        cout << "2. Veg Crispy Sandwich - Rs. 160\n";
        cout << "3. Extreme Veg Sandwich- Rs. 100\n";
        cout << "-----------------------\n";
    }

    void coffeeMenu() {
        cout << "\n---- Coffee Menu ----\n";
        cout << "1. Black Coffee - Rs. 60\n";
        cout << "2. Cold Coffee  - Rs. 100\n";
        cout << "3. Cappuccino   - Rs. 80\n";
        cout << "---------------------\n";
    }

    // Take Order
    void takeOrder() {
        bool ordering = true;

        while (ordering) {
            showMenu();
            cout << "\nEnter your Choice (1-5): ";
            cin >> choice;

            if (choice == 5) {
                ordering = false;
                break;
            }

            switch (choice) {
                case 1: // Pizza
                    pizzaMenu();
                    cout << "Enter your Pizza Choice: ";
                    cin >> subChoice;
                    cout << "Enter Quantity: ";
                    cin >> quantity;

                    if (subChoice == 1) addItem("Margherita Pizza", quantity, 250);
                    else if (subChoice == 2) addItem("Cheese Burst Pizza", quantity, 300);
                    else if (subChoice == 3) addItem("Paneer Tikka Pizza", quantity, 350);
                    else cout << "Invalid Pizza Choice!\n";
                    break;

                case 2: // Burger
                    burgerMenu();
                    cout << "Enter your Burger Choice: ";
                    cin >> subChoice;
                    cout << "Enter Quantity: ";
                    cin >> quantity;

                    if (subChoice == 1) addItem("Veg Burger", quantity, 120);
                    else if (subChoice == 2) addItem("Cheese Burger", quantity, 150);
                    else if (subChoice == 3) addItem("Crispy Burger", quantity, 180);
                    else cout << "Invalid Burger Choice!\n";
                    break;

                case 3: // Sandwich
                    sandwichMenu();
                    cout << "Enter your Sandwich Choice: ";
                    cin >> subChoice;
                    cout << "Enter Quantity: ";
                    cin >> quantity;

                    if (subChoice == 1) addItem("Club Sandwich", quantity, 240);
                    else if (subChoice == 2) addItem("Veg Crispy Sandwich", quantity, 160);
                    else if (subChoice == 3) addItem("Extreme Veg Sandwich", quantity, 100);
                    else cout << "Invalid Sandwich Choice!\n";
                    break;

                case 4: // Coffee
                    coffeeMenu();
                    cout << "Enter your Coffee Choice: ";
                    cin >> subChoice;
                    cout << "Enter Quantity: ";
                    cin >> quantity;

                    if (subChoice == 1) addItem("Black Coffee", quantity, 60);
                    else if (subChoice == 2) addItem("Cold Coffee", quantity, 100);
                    else if (subChoice == 3) addItem("Cappuccino", quantity, 80);
                    else cout << "Invalid Coffee Choice!\n";
                    break;

                default:
                    cout << "Invalid Main Menu Choice!\n";
            }

            char more;
            cout << "\nDo you want to order more? (y/n): ";
            cin >> more;
            if (more == 'n' || more == 'N') {
                ordering = false;
            }
        }

        cin.ignore();
    }

    // Function to Add Item to Bill
    void addItem(string itemName, int quantity, float unitPrice) {
        items[orderCount] = itemName;
        qty[orderCount] = quantity;
        price[orderCount] = unitPrice * quantity;
        totalBill += unitPrice * quantity;
        orderCount++;
        cout << "-> " << quantity << " " << itemName << " added successfully.\n";
    }

    // Generate Bill
    void generateBill() {
        cout << "\n========== BILL ==========\n";
        cout << "Customer Name: " << CustomerName << endl;
        cout << "\nItems Ordered:\n";
        cout << "--------------------------\n";
        cout << "Item\t\tQty\tPrice\n";
        cout << "--------------------------\n";

        for (int i = 0; i < orderCount; i++) {
            cout << items[i] << "\t" << qty[i] << "\tRs. " << price[i] << endl;
        }

        cout << "--------------------------\n";
        cout << "Total Amount: Rs. " << totalBill << endl;
        cout << "==========================\n";
        cout << "Thank you for Ordering! Visit Again!\n";
    }
};

int main() {
    FoodOrder order;
    order.getCustomerName();
    order.takeOrder();
    order.generateBill();

    return 0;
}

