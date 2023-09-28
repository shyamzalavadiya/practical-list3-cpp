#include<iostream>
using namespace std;

class Shape {
public:
    double height;
    double base;

    void display_shape();
};

void Shape::display_shape() {
    cout<<"Pinak viradiya"<<endl;
    cout<<"220130318014"<<endl;
    cout << "Height: " << height <<endl<<"Base: " << base << endl;
}

int main() {
    Shape myShape;
    cout<<" Enter your height ::";
    cin>>myShape.height;
    cout<<"Enter your base ::";
    cin>>myShape.base;
    
//    myShape.height = 5.0;
//    myShape.base = 3.0;

    myShape.display_shape();

    return 0;
}

