// mph converted to minutes and seconds per mile.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    double miles_per_hour;
    int minutes_per_mile = 0, seconds_per_mile;
   
    cout << "This program will convert milers per hour into the pace minutes and seconds per mile\n";
    cout << "Please enter the miles per hour:";
    cin >> miles_per_hour;

    seconds_per_mile = 3600 / miles_per_hour;
   
    while (seconds_per_mile >= 60)
    {
        seconds_per_mile = seconds_per_mile - 60;
        minutes_per_mile++;
    }
   
    
    cout << "this converts to " << minutes_per_mile << " minutes and " << seconds_per_mile << " seconds per mile";
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
