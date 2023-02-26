#include <iostream>
using namespace std;

int main()
{
    double counter1, total1, counter2, total2, counter3, total3, spending;
    int a = 0;
    while (a == 0)
    {
        cout << "Please enter the customer's spending: " << endl;
        cin >> spending;

        if (spending >= 0 && spending <= 200)
        {
            counter1++;
            total1 += spending;
        }
        else if (spending >= 200.01 && spending <= 800)
        {
            counter2++;
            total2 += spending;
        }
        else if (spending >= 800.01)
        {
            counter3++;
            total3 += spending;
        }
        cout << "Continue the program?" << endl;
        cout << "Enter 0 for yes and another number for no" << endl;
        cin >> a;
    }
    cout << "The total number of customers with their spending between 0$ and 200$ is: " << counter1 << endl;
    cout << "The total spending was: " << total1 << endl;
    cout << "The total number of customers with their spending between 200$ and 800$ is: " << counter2 << endl;
    cout << "The total spending was: " << total2 << endl;
    cout << "The total number of customers with their spending between 800$ or more is: " << counter3 << endl;
    cout << "The total spending was: " << total3 << endl;
    return 0;
}