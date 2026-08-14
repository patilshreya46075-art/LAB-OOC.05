#include <iostream>
using namespace std;

class Employee
{
    int id;
    string branch;
    float basicSalary;
    float grossSalary;

public:

    void inputDetails()
    {
        cout << "Enter Employee ID: ";
        cin >> id;

        cout << "Enter Branch: ";
        cin >> branch;

        cout << "Enter Basic Salary: ";
        cin >> basicSalary;
    }

    void calculateGrossSalary()
    {
        float DA, HRA;

        DA = basicSalary * 0.10;
        HRA = basicSalary * 0.20;

        grossSalary = basicSalary + DA + HRA;
    }

    void displayDetails()
    {
        cout << "\n--- Employee Details ---" << endl;
        cout << "Employee ID: " << id << endl;
        cout << "Branch: " << branch << endl;
        cout << "Basic Salary: " << basicSalary << endl;
        cout << "Gross Salary: " << grossSalary << endl;
    }
};

int main()
{
    Employee e;

    e.inputDetails();
    e.calculateGrossSalary();
    e.displayDetails();

    return 0;
}