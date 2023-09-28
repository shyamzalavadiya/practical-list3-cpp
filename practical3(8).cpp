#include <iostream>
using namespace std;

class Account {
public:
    int acc_no;
    double balance;
    int branch_code;

     Account(int no, double bal, int code) : acc_no(no), balance(bal), branch_code(code) {}

    void display() {
        cout<<"Pinak viradiya"<<endl;
        cout<<"220130318014"<<endl;
        cout << "Account Number: " << acc_no << endl;
        cout << "Balance: $" << balance << endl;
        cout << "Branch Code: " << branch_code << endl;
    }
};

int main() {
    Account acc1(1001, 5000.75, 123); 
    
    acc1.display();

    return 0;
}

