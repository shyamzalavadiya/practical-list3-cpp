#include <iostream>
#include <string>
using namespace std;

class Employee {
private:
    string name;
    int age;
    double salary;

public:
    void setDetails(string empName, int empAge, double empSalary) {
        name = empName;
        age = empAge;
        salary = empSalary;
    }

    void displayDetails() {
        cout<<"Pinak viradiya"<<endl;
        cout<<"220130318014"<<endl;
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Salary: $" << salary << endl;
    }
};

int main() {
    Employee emp1;  
    
     emp1.setDetails("pinak", 30, 50000.50);

      emp1.displayDetails();

    return 0;
}

