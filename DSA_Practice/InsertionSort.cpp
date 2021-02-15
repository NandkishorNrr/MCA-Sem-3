#include <iostream>
using namespace std;

void InsertionSort(int arr[], int size)
{
    int i, j, temp;

    for (i = 1; i < size; i++)
    {
        temp = arr[i];
        for (j = i - 1; j >= 0 && temp < arr[j]; j--)
            arr[j + 1] = arr[j];
        arr[j + 1] = temp;
    }
}
int main()
{
    int size;
    cout << "Enter size of array.\n";
    cin >> size;

    int arr[size];
    cout << "Enter " << size << " elements in the array.\n";
    for (int i = 0; i < size; i++)
        cin >> arr[i];

    cout << "\nElements in the array are :\n";
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";

    InsertionSort(arr, size);
    cout << "\nElements in the array after sorting are :\n";
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    return 0;
}