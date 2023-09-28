#include<iostream>
#include<string>

struct Employee 
{
    std::string emp_name;
    int emp_code;
    float emp_salary;
    std::string emp_branch;
};

int main() {
    Employee emp1;

cout<<"Pinak viradiya"<<endl;
cout<<"220130318014"<<endl;
 
     emp1.emp_name = "pinak";
    emp1.emp_code = 1002;
    emp1.emp_salary = 50000.0;
    emp1.emp_branch = "IT Department";

    
    std::cout << "Employee Name: " << emp1.emp_name << std::endl;
    std::cout << "Employee Code: " << emp1.emp_code << std::endl;
    std::cout << "Employee Salary:" << emp1.emp_salary << std::endl;
    std::cout << "Employee Branch:" << emp1.emp_branch << std::endl;

    return 0;
}

