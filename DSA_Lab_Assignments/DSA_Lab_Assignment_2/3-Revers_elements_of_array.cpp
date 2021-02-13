// Q:-3	WAP to reverse the elements of array.
#include<iostream>
using namespace std;

int main()
{
    system("CLS");
    int n=0;
    cout<<"Enter number of elements.\n";
    cin>>n;
    int arr[n];
    cout<<"Enter "<<n<<" elements.\n";
    for (int i = 0; i < n ; i++)
    {
        cin>>arr[i];
    }
    cout<<"Array befor reverse.\n";
    for (int i = 0; i < n ; i++)
    {
        cout<<arr[i]<<"\t";
    }
    for (int i = 0, j=n-1; i < n/2; i++,j--)
    {
        int temp;
        temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
    cout<<"\nArray after reverse.\n";
    for (int i = 0; i < n ; i++)
    {
        cout<<arr[i]<<"\t";
    }
    return 0;
}
