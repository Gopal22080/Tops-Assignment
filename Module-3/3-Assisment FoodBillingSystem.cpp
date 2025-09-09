#include <iostream>
#include <string.h>
using namespace std;

class FoodOrder {
private:
    string CustomerName;
    int choice, quantity;
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

    void getCustomerName() {
        cout << "\nEnter your Name: ";
        getline(cin, CustomerName); // works correctly
    }

    void showMenu() {
        cout << "\n========== MENU ==========\n";
        cout << "1. Pizza   - Rs. 150\n";
        cout << "2. Burger  - Rs. 100\n";
        cout << "3. Pasta   - Rs. 120\n";
        cout << "4. Coffee  - Rs. 80\n";
        cout << "5. EXIT\n";
        cout << "==========================\n";
    }

    void takeOrder() {
        bool ordering = true;

        while (ordering) {
            showMenu();
            cout << "\nEnter your Choice (1-5): ";
            cin >> choice;

            switch (choice) {
                case 1:
                    cout << "Enter Quantity of Pizza: ";
                    cin >> quantity;
                    totalBill += 150 * quantity;
                    items[orderCount] = "Pizza";
                    qty[orderCount] = quantity;
                    price[orderCount] = 150 * quantity;
                    orderCount++;
                    break;
                case 2:
                    cout << "Enter Quantity of Burger: ";
                    cin >> quantity;
                    totalBill += 100 * quantity;
                    items[orderCount] = "Burger";
                    qty[orderCount] = quantity;
                    price[orderCount] = 100 * quantity;
                    orderCount++;
                    break;
                case 3:
                    cout << "Enter Quantity of Pasta: ";
                    cin >> quantity;
                    totalBill += 120 * quantity;
                    items[orderCount] = "Pasta";
                    qty[orderCount] = quantity;
                    price[orderCount] = 120 * quantity;
                    orderCount++;
                    break;
                case 4:
                    cout << "Enter Quantity of Coffee: ";
                    cin >> quantity;
                    totalBill += 80 * quantity;
                    items[orderCount] = "Coffee";
                    qty[orderCount] = quantity;
                    price[orderCount] = 80 * quantity;
                    orderCount++;
                    break;
                case 5:
                    ordering = false;
                    break;
                default:
                    cout << "Invalid Choice! Try again.\n";
            }

            if (choice != 5) {
                char more;
                cout << "\nDo you want to order more? (y/n): ";
                cin >> more;
                if (more == 'n' || more == 'N') {
                    ordering = false;
                }
            }
        }

        cin.ignore();
    }

    void generateBill() {
        cout << "\n========== BILL ==========\n";
        cout << "Customer Name: " << CustomerName << endl;
        cout << "\nItems Ordered:\n";
        cout << "--------------------------\n";
        cout << "Item\tQty\tPrice\n";
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

