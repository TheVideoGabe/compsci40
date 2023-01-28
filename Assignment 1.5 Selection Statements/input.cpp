#include <iostream>
#include <math.h>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
    int score = 0;
    char answer;
    cout << "==================" << endl;
    cout << "QUIZ" << endl;
    cout << "==================" << endl;
    cout << "Q1. What is the capital of France? " << endl;
    cout << "a. Paris b. Rome c. London d. Berlin " << endl;
    cin >> answer;
    if(answer == 'a') {
        cout << "Great! That is correct." << endl;
        score++;
    } else {
        cout << "That is incorrect!" << endl;
    }
    cout << "------------------------------------------------------" << endl;
    cout << "Q2. What is the largest planet in the solar system? " << endl;
    cout << "a. Earth b. Jupiter c. Mars d. Venus " << endl;
    cin >> answer;
    if(answer == 'b') {
        cout << "Great! That is correct." << endl;
        score++;
    } else {
        cout << "That is incorrect!" << endl;
    }
    cout << "------------------------------------------------------" << endl;
    cout << "Q3. What is the smallest continent? " << endl;
    cout << "a. Africa b. Europe c. Asia d. Australia " << endl;
    cin >> answer;
    if(answer == 'd') {
        cout << "Great! That is correct." << endl;
        score++;
    } else {
        cout << "That is incorrect!" << endl;
    }
    cout << "------------------------------------------------------" << endl;
    cout << "Q4. What is the currency of Japan? " << endl;
    cout << "a. Euro b. Peso c. Yen d. Dollar " << endl;
    cin >> answer;
    if(answer == 'c') {
        cout << "Great! That is correct." << endl;
        score++;
    } else {
        cout << "That is incorrect!" << endl;
    }
    cout << "------------------------------------------------------" << endl;
    cout << "Total points earned: " << score << endl;
    cout << "------------------------------------------------------" << endl;
    int maxNum, temp;
    cout << "Please enter 4 integers:" << endl;
    cin >> maxNum;
    for (int i = 0; i < 3; i++)
    {
        cin >> temp;
        if (temp > maxNum)
        {
            maxNum = temp;
        }
    }
    cout << "The largest number is: " << maxNum << endl;
    cout << "------------------------------------------------------" << endl;
    cout << "Can you ride a bicycle to get to the moon? (y/n)" << endl;
    cin >> answer;
    if (answer == 'y') 
        cout << "You can complete a marathon in 10 minutes." << endl;
    else
        cout << "You can't ride a bicycle to get to the moon." << endl;

    return 0;
}