#include <iostream>
using namespace std;

int main() {
    int sum, num, count;
    cout << "How many integers would you like to add?" << endl;
    cin >> count;
    for (int i = 0; i < count; i++){
        cout << "Enter an integer: " << endl;
        cin >> num;
        sum += num;
    }
    cout << "The sum of your numbers is: " << sum << endl;
    return 0;
}