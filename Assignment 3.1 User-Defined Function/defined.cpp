#include <iostream>
#include <cmath>
using namespace std;

double calculateX(double interestRate, double term) {
    return pow((1 + interestRate/1200), -12 * term);
}

double calculateY(double interestRate) {
    return interestRate/1200;
}

double calculateZ(double x, double y) {
    return (1 - x)/y;
}

int main() {
    double interestRate, loanAmount, term;
    double x, y, z;

    cout << "Please enter the interest rate:" << endl;
    cin >> interestRate;
    cout << "Please enter the loan amount:" << endl;
    cin >> loanAmount;
    cout << "Please enter the term:" << endl;
    cin >> term;
    x = calculateX(interestRate, term);
    y = calculateY(interestRate);
    z = calculateZ(x, y);
    cout.setf(ios::fixed);
    cout.precision(2);
    cout << "Your monthly payment is " << (loanAmount / z) << endl;
    return 0;
}
