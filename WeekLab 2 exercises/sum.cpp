#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

int main () {
    double input, total, num1, num2, num3;
    cout << "Please enter a number between 0 - 1000: " << endl;
    cin >> input;
    num1 = int(input) % 10;
    cout << num1 << endl;
    total += num1;
    num2 = int(input) / 10 % 10;
    cout << num2 << endl;
    total += num2;
    num3 = int(input) / 100;
    cout << num3 << endl;
    total += num3;
    cout << "The sum of the digits is " << total << endl;
    return 0;
}