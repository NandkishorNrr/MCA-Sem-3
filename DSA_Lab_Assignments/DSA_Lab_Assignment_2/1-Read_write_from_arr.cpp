// Q:-1	WAP to read and write elements of array.
#include <iostream>
using namespace std;
int main()
{
    int arr[10], n;
    cout << "Write 10 numbers in array.\n";
    for (int i = 0; i < 10; i++)
    {
        cin >> arr[i];
    }
    cout << "Read any number from array of index 0-9.\n";
    cout << "Enter index number.\n";
    cin >> n;
    cout << "Index " << n << " value " << arr[n];
    return 0;
}
