// Q:-4	WAP to perform linear search on array.
#include <iostream>
#include<conio.h>
using namespace std;
int main()
{
    int n = 0, arr[n], in, p, c;
    cout << "Enter number of elements.\n";
    cin >> n;
    cout << "Enter " << n << " elements.\n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    while (1)
    {
        system("CLS");
        cout << "1. Search by index.\n";
        cout << "2. Search by value.\n";
        cout << "3. View elements in array.\n";
        cout << "4. Exit\n";
        cout<<"Enter your choice.\n";
        cin >> c;
        switch (c)
        {
        case 1:
            cout << "Enter index.\n";
            cin >> in;
            if (in < n)
            {
                cout << "Index " << in << " Value " << arr[in] << "\n";
                getch();
            }
            else
                cout << "Invalid index.";
                getch();
            break;
        case 2:
            cout << "Enter value.\n";
            cin >> p;
            for (int i = 0; i < n; i++)
            {
                if (p == arr[i])
                {
                    cout << "Index " << i << " Value " << arr[i] << "\n";
                    getch();
                    return 0 ;
                }
            }
            break;
        case 3:
            cout << "\nElements in array are.\n";
            for (int i = 0; i < n; i++)
            {
                cout << arr[i] << "\t";
            }
            getch();
            break;
        case 4:
            exit(0);
            break;
        default:
            cout << "Invalid choice.";
        }
    }
    return 0;
}