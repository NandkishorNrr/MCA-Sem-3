// WAP to represent a polynomial in 2-D array.
#include <iostream>
using namespace std;

int main()
{
    int arr[2][3];
    cout << "\n\nEnter coefficient followed by exponent for each term.\n";
    for (int j = 0; j < 3; j++)
    {
        cin >> arr[0][j];
    }
    cout << "\n\nEnter power followed by exponent for each term respectively.\n";
    for (int j = 0; j < 3; j++)
    {
        cin >> arr[1][j];
    }

    cout << "\n\nYour polynomial expression.\n";
    for (int j = 0; j < 3; j++)
        cout << arr[0][j] << "x^" << arr[1][j] << " + ";
        cout<<0;
    return 0;
}