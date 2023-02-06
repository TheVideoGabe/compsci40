#include <iostream>
using namespace std;

int main()
{
    int decide = 0;
    cout << "1. Convert the temperature from Celsius to Fahrenheit" << endl;
    cout << "2. Display Next Month Appointments" << endl;
    cout << "3. Find My Grade \n"
         << endl;
    cout << "Choose a menu option: ";
    cin >> decide;

    if (decide == 1)
    {
        cout << "You chose: Convert the temperature from Celsius to Fahrenheit\n"
             << endl;
        double celsius, fahrenheit;
        cout << "Enter temperature in Celsius: ";
        cin >> celsius;
        fahrenheit = (9.0 / 5.0) * celsius + 32;
        cout << "Temperature in Fahrenheit: " << fahrenheit << endl;
    }
    else if (decide == 2)
    {
        cout << "\nYou chose : Display Next Month Appointments\n"
             << endl;
        cout << "Your appointments are as follows:" << endl;
        cout << "+============================================+" << endl;
        cout << "February 5th: Doctor's appointment" << endl;
        cout << "February 8th: Take dog to the vet" << endl;
        cout << "February 11th: Celebrate sister's birthday" << endl;
        cout << "February 13th: Get groceries" << endl;
        cout << "February 14th: Celebrate Valentines Day" << endl;
        cout << "+============================================+" << endl;
    }
    else if (decide == 3)
    {
        cout << "\nYou chose: Find My Grade" << endl;
        cout << "\nPlease enter 4 grade scores (1-100)" << endl;
        int total = 0;
        int score = 0;
        for (int i = 0; i < 4; i++)
        {
            cin >> score;
            total += score;
        }
        total = total / 4;
        if (total >= 90)
            cout << "\nYour total grade is an A" << endl;
        else if (total >= 80)
            cout << "\nYour total grade is a B" << endl;
        else if (total >= 70)
            cout << "\nYour total grade is a C" << endl;
        else if (total >= 60)
            cout << "\nYour total grade is a D" << endl;
        else
            cout << "\nYour total grade is an F" << endl;
    }
    else
    {
        cout << "\nNUMBER OPTION WAS NOT IN THE MENU" << endl;
        cout << "\nSelect again\n"
             << endl;
        main();
    }

    return 0;
}