// WAP to add two polynomials.
#include <iostream>
using namespace std;

int main()
{
    int arr1[2][3], arr2[2][3], sum[2][3];

    cout << "\n\nEnter coefficient followed by exponent for each term, for 1st polynomial.\n";
    for (int j = 0; j < 3; j++)
        cin >> arr1[0][j];
    cout << "\n\nEnter power followed by exponent for each term respectively, for 1st polynomial.\n";
    for (int j = 0; j < 3; j++)
        cin >> arr1[1][j];

    cout << "\n\nEnter coefficient followed by exponent for each term, for 2nd polynomial.\n";
    for (int j = 0; j < 3; j++)
        cin >> arr2[0][j];
    cout << "\n\nEnter power followed by exponent for each term respectively, for 2nd polynomial.\n";
    for (int j = 0; j < 3; j++)
        cin >> arr2[1][j];

    for (int j = 0; j < 3; j++)
    {
        sum[0][j] = arr1[0][j] + arr2[0][j];
        sum[1][j] = arr1[1][j];
    }

    cout << "\n\n1st Polynomial.\n";
    for (int j = 0; j < 3; j++)
        cout << arr1[0][j] << "x^" << arr1[1][j] << " + ";
    cout << 0;
    cout << "\n\n2nd Polynomial.\n";
    for (int j = 0; j < 3; j++)
        cout << arr2[0][j] << "x^" << arr2[1][j] << " + ";
    cout << 0;

    cout << "\n\nSum of two polynomial.\n";
    for (int j = 0; j < 3; j++)
        cout << sum[0][j] << "x^" << sum[1][j] << " + ";
    cout << 0;
    return 0;
}