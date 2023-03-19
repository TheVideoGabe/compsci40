#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>
using namespace std;

// User-defined function for calculating the sum of a sequence of squares
int sumSquares(int num1, int num2) {
    int sum = 0;
    for (int i = num1; i <= num2; i++) {
        sum += i * i;
    }
    return sum;
}

// User-defined function for generating random numbers and displaying Hs and Ts
void randomHT(int n) {
    int hCount = 0, tCount = 0;
    srand(time(NULL)); // seed the random number generator
    for (int i = 0; i < n; i++) {
        int num = rand() % 2; // generate random number between 0 and 1
        if (num == 0) {
            cout << "H";
            hCount++;
        } else {
            cout << "T";
            tCount++;
        }
    }
    cout << endl << hCount << " Hs " << tCount << " Ts" << endl;
}

int main() {
    int num1 = 0, num2 = 0;
    cout << "\nEnter first number: ";
    cin >> num1;
    cout << "\nEnter second number: ";
    cin >> num2;
    int s = sumSquares(num1, num2);
    cout << "\nThe sum of squares between 5 and 11 is " << s << endl;
    
    int n = 0;
    cout << "\nHow many random numbers? ";
    cin >> n;
    randomHT(n);

    return 0;
}

