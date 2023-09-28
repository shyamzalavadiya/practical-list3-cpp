#include <iostream>
using namespace std;

class Item {
private:
    int number;
    float cost;

public:
    void displaydata() {
    	cout<<"Pinak viradiya"<<endl;
    	cout<<"220130318014";
        cout << "Number: " << number << endl;
        cout << "Cost: " << cost << endl;
    }

    void setData(int num, float cst) {
        number = num;
        cost = cst;
    }
};

void getdata(Item& item) {
    int num;
    float cst;
    cout << "Enter number: ";
    cin >> num;
    cout << "Enter cost: ";
    cin >> cst;
    item.setData(num, cst);
}

int main() {
    Item item;
    getdata(item);
    cout << "Entered data:" << endl;
    item.displaydata();
    return 0;
}

