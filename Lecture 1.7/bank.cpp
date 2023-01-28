#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

int main() {
    double A, P, r, t;
    cout << "Please enter the principal amount: " << endl;
    cin >> P;
    cout << "Please enter the interest rate: " << endl;
    cin >> r;
    cout << "Please enter the number of years: " << endl;
    cin >> t;
    cout.setf(ios::fixed);
    cout.precision(2);
    A = P * ((pow((1.0 + r / 1200), 12 * t) - 1) / (r / 1200));
    cout << "The total amount in your CD account is $ " << A << endl;
    return 0;
}

