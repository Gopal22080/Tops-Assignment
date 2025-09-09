#include<iostream>
using namespace std;

class Product {
    public:
        int pid;
        string ProductName;
        string brand;
        int price;

    void getProductDetail() {
        cout << "\n Enter Product-ID and Product-Name : ";
        cin >> pid >> ProductName;

        cout << "\n Enter Brand And Price : ";
        cin >> brand >> price;
    }

    void ShowProductDetails() {
        cout << "\n Product ID = " << pid << "\t Product Name = " << ProductName;
        cout << "\n Brand = " << brand << "\t Price = " << price;
    }
};

int main() {
    int i;
    Product product[3]; 
    for (i = 0; i < 3; i++) {
        cout << "\n\n Enter Product Detail " << i + 1 << "\n\n";
        product[i].getProductDetail();
    }
    for (i = 0; i < 3; i++) {
        cout << "\n\n Show Product Detail of " << i + 1 << "\n\n";
        product[i].ShowProductDetails();
    }
}

