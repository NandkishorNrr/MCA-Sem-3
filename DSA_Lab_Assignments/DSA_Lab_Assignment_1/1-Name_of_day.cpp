// 1. WAP to print name of day, if day number is given.
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter a day number.\n";
    cin >> n;
    switch (n)
    {
    case 1:
        cout << "Sunday";
        break;
    case 2:
        cout << "Monday";
        break;
    case 3:
        cout << "Tuesday";
        break;
    case 4:
        cout << "Wednesday";
        break;
    case 5:
        cout << "Thursday";
        break;
    case 6:
        cout << "Friday";
        break;
    case 7:
        cout << "Saturday";
    default:
        cout << "Invalid choice.";
        break;
    }
    return 0; 
}