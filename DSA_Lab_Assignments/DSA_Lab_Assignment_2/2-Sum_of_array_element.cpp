// Q:-2	WAP to sum the elements of an array.
#include<iostream>
using namespace std;
int main()
{
    int arr[10],sum=0;
    cout<<"Write 10 numbers in array.\n";
    for (int i = 0; i < 10 ; i++)
    {
        cin>>arr[i];
    }
    cout<<"Sum of elememts of the array.\n";
    for (int i = 0; i < 10; i++)
    {
        sum = sum + arr[i];
    }
    cout<<"Sum = "<<sum;
    return 0;
}