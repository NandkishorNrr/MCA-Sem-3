// 1. WAP to print numbers from 1 to n, where n is given by user.
#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter a number.\n";
    cin>>num;
    for (int i = 1; i <=num; i++)
    {
        cout<<i<<endl;
    }
    return 0;
}