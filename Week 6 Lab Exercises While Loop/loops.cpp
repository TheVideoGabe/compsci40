#include <iostream>;
using namespace std;

int main()
{
    int choice;
    cout << "Please choose a program to run\n"
         << endl;
    cout << "1. Using a looping statement, write a program that asks a user to enter 50 integers and then display the smallest number user entered." << endl;
    cout << "\n2. Using a looping statement, write a program that uses random function rand()  to randomly generate 50 integers between 0 and 99, and then inform the user the total number of integers generated that are less than or equal to 25." << endl;
    cout << "\n3. Write a program that asks a user to enter 20 integers between 18 and 32 with each number represents the age of a students in a C++ programming class. After data are entered, the program informs the user the total number of the students that are older than 25 in this class." << endl;
    cout << "\n4. Write a program that uses random function to randomly generate 30 integers between 0 and 1. Then the program tells the user the total number of 0's and total number of 1's among those 30 integers.\n"
         << endl;

    cout << "Choice: ";
    cin >> choice;
    cout << "\n";

    if (choice == 1)
    {
        int num, smallest;
        cout << "Enter 50 integers: \n"
             << endl;
        int i = 0;
        while (i < 50)
        {
            cin >> num;
            if (i == 0 || num < smallest)
            {
                smallest = num;
            }
            i++;
        }
        cout << "\nThe smallest number entered is " << smallest << endl;
    }
    else if (choice == 2)
    {

        int count = 0;
        for (int i = 0; i < 50; i++)
        {
            int num = rand() % 100;
            if (num <= 25)
            {
                count++;
            }
        }
        cout << "\nThe total number of integers generated that are less than or equal to 25 is " << count << endl;
    }
    else if (choice == 3)
    {
        int num, count = 0;
        cout << "\nEnter the ages of 20 students that are between the ages of 18 and 32: " << endl;

        for (int i = 0; i < 20; i++)
        {
            cin >> num;
            if (num > 25)
            {
                count++;
            }
        }
        cout << "\nThe total number of students older than 25 in the class is " << count << endl;
    }
    else if (choice == 4)
    {
        int num = 0, count0 = 0, count1 = 0;
        for (int i = 0; i < 30; i++)
        {
            num = rand() % 2;
            cout << num;
            if (num == 0)
            {
                count0++;
            }
            else
            {
                count1++;
            }
        }
        cout << "\n\nThe total number of 0's is " << count0 << endl;
        cout << "\nThe total number of 1's is " << count1 << endl;
    }
    else
    {
        cout << "\nChoice not found\n"
             << endl;
        main();
    }
    return 0;
}
