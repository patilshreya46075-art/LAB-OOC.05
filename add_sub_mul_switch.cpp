#include <iostream>
using namespace std;

int main() {
    int a, b, choice;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    cout << "\n1. Add\n2. Sub\n3. Mult\n4. Div\n5. Mod\n";
    cout << "Enter your choice: ";
    cin >> choice;

    switch(choice) {
        case 1:
            cout << "Addition = " << a + b;
            break;
        case 2:
            cout << "Subtraction = " << a - b;
            break;
        case 3:
            cout << "Multiplication = " << a * b;
            break;
        case 4:
            if(b != 0)
                cout << "Division = " << (float)a / b;
            else
                cout << "Cannot divide by zero";
            break;
        case 5:
            if(b != 0)
                cout << "Mod = " << a % b;
            else
                cout << "Cannot mod by zero";
            break;
        default:
            cout << "Invalid choice";
    }
    return 0;
}
