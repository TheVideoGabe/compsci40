#include <iostream>
#include <math.h>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
    double faren;
    cout << left << setw(10) << left << "Celsius" << right << setw(10) << "Fahrenheit" << endl;
    for (double c1 = 0.00; c1 <= 50.00;)
    {
        faren = (c1 * (9.0 / 5.0)) + 32.0;
        cout << left << setw(10) << left << c1 << right << setw(10) << faren << right << endl;
        c1 += 10;
    }
    return 0;
}