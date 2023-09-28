#include <iostream>
using namespace std;

class Max {
private:
    int num_1;
    int num_2;
public:
    void input() {
        cout<<"Pinak viradiya"<<endl;
        cout<<"220130318014"<<endl;
        cout << "Enter first number: ";
        cin >> num_1;
        cout << "Enter second number: ";
        cin >> num_2;
    }

    void display() {
        cout << "Numbers entered: " << num_1 << " and " << num_2 << endl;
    }

    void largest() {
        if (num_1 > num_2)
            cout << num_1 << " is the largest." << endl;
        else if (num_2 > num_1)
            cout << num_2 << " is the largest." << endl;
        else
            cout << "Both numbers are equal." << endl;
    }
};

int main() {
    Max numbers; 
    numbers.input();  
    numbers.display();  
    numbers.largest();  
    return 0;
}

