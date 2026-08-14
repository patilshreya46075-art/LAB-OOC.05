#include <iostream>
using namespace std;

class Product
{
private:
    int ID, Quantity;
    float Price;
    string Name;

public:
    void inputDetails()
    {
        cout << "Enter Product ID: ";
        cin >> ID;

        cout << "Enter Product Name: ";
        cin >> Name;

        cout << "Enter Quantity: ";
        cin >> Quantity;

        cout << "Enter Price: ";
        cin >> Price;
    }

    void displayDetails()
    {
        cout << "\n--- Product Details ---" << endl;
        cout << "Product ID: " << ID << endl;
        cout << "Product Name: " << Name << endl;
        cout << "Quantity: " << Quantity << endl;
        cout << "Price: " << Price << endl;
    }

    void billing()
    {
        float total = Quantity * Price;
        cout << "Total Bill: " << total << endl;
    }
};

int main()
{
    Product p;

    p.inputDetails();
    p.displayDetails();
    p.billing();

    return 0;
}