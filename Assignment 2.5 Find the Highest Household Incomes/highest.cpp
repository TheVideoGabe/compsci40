#include <iostream>
using namespace std;

int main()
{
    int highest, amount, incomes;
    cout << "How many incomes in this set?" << endl;
    cin >> incomes;
    cout << "Please enter the first household income: " << endl;
    cin >> highest;
    int i = 0;
    while (i < incomes -1)
    {
        cout << "Enter the next household income: " << endl;
        cin >> amount;
        if (amount > highest)
        {
            highest = amount;
            i++;
        }
    }
    cout << "The highest household income is: " << highest << endl;
    return 0;
}