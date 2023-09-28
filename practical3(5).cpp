#include <iostream>
using namespace std;

class Distance {
private:
    int feet;
    float inches;

public:
    void get_distance() {
        cout<<"Pinak viradiya"<<endl;
        cout<<"220130318014"<<endl;
        cout << "Enter feet: ";
        cin >> feet;
        cout << "Enter inches: ";
        cin >> inches;
    }

    void display_distance() {
        cout << "Feet: " << feet << " Inches: " << inches << endl;
    }
};

int main() {
    Distance d1;

     d1.get_distance();

     d1.display_distance();

   return 0;
}

