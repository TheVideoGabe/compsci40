#include <iostream>
#include <math.h>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
    int score;
    cout << "Enter a score between 0 and 100" << endl;
    cin >> score;

    if (score >= 90)
        cout << "Your grade is an A" << endl;
    else if (score >= 80)
        cout << "Your grade is a B" << endl;
    else if (score >= 70)
        cout << "Your grade is a C" << endl;
    else if (score >= 60)
        cout << "Your grade is a D" << endl;
    else
        cout << "Your grade is an F" << endl;

    int minNum, temp;
    cout << "Enter 8 integers:" << endl;
    cin >> minNum;
    for (int i = 0; i < 7; i++)
    {
        cin >> temp;
        if (temp < minNum)
        {
            minNum = temp;
        }
    }

    cout << "The smallest number is: " << minNum << endl;
    return 0;
}
