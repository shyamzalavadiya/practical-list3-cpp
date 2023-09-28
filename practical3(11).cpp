#include <iostream>
using namespace std;

class Product {
private:
    int product_id;
    string product_name;
    float unit_price;

public:
    void getData() {
    	cout<<"Pinak viradiya"<<endl;
    	cout<<"220130318014";
        cout << "Enter Product ID: ";
        cin >> product_id;
        cout << "Enter Product Name: ";
        cin.ignore();
        getline(cin, product_name);
        cout << "Enter Unit Price: ";
        cin >> unit_price;
    }

    void putData() {
        cout << "Product ID: " << product_id << endl;
        cout << "Product Name: " << product_name << endl;
        cout << "Unit Price: " << unit_price << endl;
    }
};

int main() {
    Product product1, product2;

    cout << "Enter details for product 1:\n";
    product1.getData();

    cout << "\nEnter details for product 2:\n";
    product2.getData();

    cout << "\nProduct Information:\n";
    cout << "-------------------\n";
    cout << "Product 1:\n";
    product1.putData();
    cout << "\nProduct 2:\n";
    product2.putData();

    return 0;
}

