#include <iostream>
using namespace std;
void BubbleSort(int arr[], int size)
{
    for (int i = 0; i < size - 1; i++)
        for (int j = 0; j < size - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
                swap(arr[j], arr[j + 1]);
        }
}
int main()
{
    system("CLS");
    int size, n, ch;
    cout << "Enter size of array.\n";
    cin >> size;
    int arr[size];
    cout << "Enter " << size << " elements.\n";
    for (int i = 0; i < size; i++)
        cin >> arr[i];
    cout << "\nElements in the array.\n";
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    BubbleSort(arr, size);
    cout << "\nElements in the array after sorting.\n";
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    return 0;
}
