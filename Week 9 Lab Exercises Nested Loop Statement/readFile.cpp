#include <iostream>
#include <fstream>
using namespace std;

int main() {
    int sum = 0, num;
    ifstream infile("./numbers.txt");
    
    for (int i = 1; i <= 50; i++) {
        infile >> num;
        sum += num;
    }
    
    cout << "The sum of the 50 integers is: " << sum << endl;
    
    return 0;
}