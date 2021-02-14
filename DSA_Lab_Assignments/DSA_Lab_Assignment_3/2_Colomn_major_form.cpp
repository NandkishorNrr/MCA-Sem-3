// WAP to calculate the address of a given element of an array in column major form.
#include <iostream>
using namespace std;
int main()
{
    system("CLS");
    int i , j, n,No_of_Row=4;
    int *add, *addCal;
    int arr[4][4] =
        {
            {5, 10, 15, 20},
            {15, 20, 25, 30},
            {25, 30, 35, 40},
            {35, 40, 45, 50},
        };
    cout << "Enter a number number.\n";
    cin >> n;
    for (i=0; i < 4; i++)
        for (j=0; j < 4; j++)
        {
            if(arr[i][j]==n)
            {
                cout<<"i= "<<i<<", j= "<<j<<", value= "<<n<<", Address "<<&arr[0][0]+sizeof(arr[0][0])*(No_of_Row*j+i);
                return 0;
            }
        }
        cout<<n<<" is not in array.";
    return 0;
}