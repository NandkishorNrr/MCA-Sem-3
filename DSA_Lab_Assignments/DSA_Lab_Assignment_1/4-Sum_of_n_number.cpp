// 4. WAP to find sum of given n numbers, where n is input by user.
#include<iostream>
using namespace std;
int main()
{
    int num,sum=0;
    cout<<"Enter number.\n";
    cin>>num;
    for (int i = 1; i <=num; i++)
    {
        sum=sum+i;
    }
    cout<<"Sum is "<<sum;
    return 0;
}