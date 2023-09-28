#include <iostream>
using namespace std;

struct Student
 {
    string name;
    int std;
    float percentage;
};

int main() {
       Student student;
       cout<<"	cout<<"zalavadiya shyam"<<endl;"<<endl;
       cout<<"220130318015"<<endln;
     cout << "Enter name: ";
    getline(cin, student.name);

    cout << "Enter std: ";
    cin >> student.std;

    cout << "Enter percentage: ";
    cin >> student.percentage;

     cout << "\nStudent Information:\n";
    cout << "Name: " << student.name << endl;
    cout << "Standard: " << student.std << endl;
    cout << "Percentage: " << student.percentage << "%" << endl;

    return 0;
}

