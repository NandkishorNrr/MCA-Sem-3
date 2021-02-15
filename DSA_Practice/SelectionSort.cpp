#include <iostream>
using namespace std;

void SelectionSort(int arr[], int size)
{
    for (int i = 0; i < size - 1; i++)
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] > arr[j])
                swap(arr[i], arr[j]);
        }
}

int main()
{
    int size;
    cout << "Enter size/number of elements of the array.\n";
    cin >> size;
    int arr[size];

    cout << "\nEnter " << size << " elements in the array.\n";
    for (int i = 0; i < size; i++)
        cin >> arr[i];

    cout << "\nElements in the array are :\n";
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";

    SelectionSort(arr, size);
    cout << "\nElements in the array after sorting are :\n";
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    return 0;
}