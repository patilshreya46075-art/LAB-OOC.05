#include <iostream>
using namespace std;

int main() {
    float length, width, area, perimeter;
    cout << "Enter length and width: ";
    cin >> length >> width;

    area = length * width;
    perimeter = 2 * (length + width);

    cout << "Area = " << area << endl;
    cout << "Perimeter = " << perimeter;
    return 0;
}
