#include <iostream>
using namespace std;

int main () {
    double length, width, area;
    cout << "Please enter the length: " << endl;
    cin >> length;
    cout << "Please enter the width: " << endl;
    cin >> width;
    area = length * width;
    cout << "The area of the rectangle is " << area << endl;
    return 0;
}