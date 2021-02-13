#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    int ch = 0, size = 20, count = 0, Nele = 0, ele = -1, max, min;
    int arr[size];

    while (1)
    {
        system("CLS");
        cout << "1. Creat an Array.\n";
        cout << "2. Insert an element(at last).\n";
        cout << "3. Delete an lement(from last).\n";
        cout << "4. Search an element.\n";
        cout << "5. Find maximum element.\n";
        cout << "6. Find minimum element.\n";
        cout << "7. Elements in the Array.\n";
        cout << "8. Exit.\n";
        cout << "\n\t\t***\n";
        cout << "Enter your choice.\n";
        cin >> ch;
        switch (ch)
        {
        case 1:
            system("CLS");
            cout << "\nEnter size of the Array.\n";
            cin >> size;
            arr[size];
            cout << "\nEnter nuber of elements you want to enter now.\n";
            cin >> Nele;
            if (Nele <= size)
            {
                cout << "\nEnter " << Nele << " element(s).\n";
                for (int i = 0; i < Nele; i++)
                {
                    cin >> arr[count];
                    count++;
                }
            }
            else
                cout << "Array can not contain more than " << size << " elemensts.\n";
            break;
        case 2:
            system("CLS");
            if (count >= size)
                cout << "Array is can not contain more than " << size << " elemensts.\n";
            else
            {
                cout << "Enter an element.\n";
                cin >> arr[count];
                count++;
            }
            break;
        case 3:
            system("CLS");
            if (count == 0)
                cout << "Array is empty.\n";
            else
            {
                count--;
                cout << arr[count] << " Deleted.\n";
            }
            break;
        case 4:
            system("CLS");
            int elcount;
            if (count == 0)
                cout << "Array is empty.\n";
            else
            {
                cout << "\nEnter an element.\n";
                cin >> ele;
                elcount = 0;
                for (int i = 0; i < count; i++)
                {
                    if (arr[i] == ele)
                    {
                        cout << ele << " at " << i << " index in the array.\n";
                        elcount++;
                    }
                }
                cout << ele << " found in array " << elcount << " time(s).\n";
            }
            break;
        case 5:
            system("CLS");
            if (count == 0)
                cout << "Array is empty.\n";
            else
            {
                int Ix=0;
                max = arr[0];
                for (int i = 0; i < count; i++)
                {
                    if (max < arr[i])
                    {
                        max = arr[i];
                        Ix = i;
                    }
                }
                cout << max << " is the maximum value "
                     << " at " << Ix << " index in the array.\n";
            }
            break;
        case 6:
            system("CLS");
            if (count == 0)
                cout << "Array is empty.\n";
            else
            {
                int In=0;
                min = arr[0];
                for (int i = 0; i < count; i++)
                {
                    if (min > arr[i])
                    {
                        min = arr[i];
                        In = i;
                    }
                }
                cout << min << " is the minimum value "
                     << " at " << In << " index in the array.\n";
            }
            break;
        case 7:
            system("CLS");
            if (count == 0)
                cout << "Array is empty.\n";
            else
            {
                cout << "Elements in the array.\n";
                for (int i = 0; i < count; i++)
                    cout << arr[i] << "\t";
            }
            break;
        case 8:
            exit(0);
            break;
        default:
            cout << "Invalid choice.\n";
            break;
        }
        getch();
    }
    return 0;
}