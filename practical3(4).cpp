#include <iostream>
#include <string>

class Student {
private:
    std::string name;
    int age;

public:
    void get_details() {
        cout<<"Pinak viradiya"<<endl;
       cout<<"220130318014"<<endl;
        std::cout << "Enter name: ";
        std::getline(std::cin, name);
        
        std::cout << "Enter age: ";
        std::cin >> age;
        
         std::cin.ignore();
    }

    void display_details() {
        std::cout << "Name: " << name << std::endl;
        std::cout << "Age: " << age << std::endl;
    }
};

int main() {
    Student student1;

     student1.get_details();

     student1.display_details();

    return 0;
}

