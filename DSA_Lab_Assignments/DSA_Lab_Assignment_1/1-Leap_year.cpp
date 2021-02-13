// 1. WAP to find a given input year is leap year or not.
#include <iostream>
using namespace std;
int main()
{
    int year;
    cout << "Enter a year.\n";
    cin >> year;
    void LeapYear(int);
    LeapYear(year);
    return 0;
}
// LeapYear fuction
void LeapYear(int y)
{
    if (y % 4 == 0)
    {
        if (y % 100 == 0)
        {
            if (y % 400 == 0)
                cout << y << " is leap year.";
            else
                cout << y << " is not a leap year.";
        }
        else
            cout << y << " is leap year.";
    }
    else
        cout << y << " is not a leap year.";
}