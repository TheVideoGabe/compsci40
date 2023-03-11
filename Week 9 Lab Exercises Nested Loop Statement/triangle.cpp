#include <iostream>
using namespace std;

int main() {
    int num;
    
    cout << "Enter an integer: ";
    cin >> num;
    
    int spaces = 0;
    for (int i = num; i >= 1; i--) {
        for (int j = 1; j <= spaces; j++) {
            cout << "  ";
        }
        for (int j = 1; j <= i; j++) {
            cout << "* ";
        }
        cout << endl;
        spaces++;
    }
    
    return 0;
}