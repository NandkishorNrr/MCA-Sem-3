// 5. WAP to find factorial of a given number.
#include<iostream>
using namespace std;
int main()
{
    int num,fact=1;
    cout<<"Enter number.\n";
    cin>>num;
    for (int i = 1; i <=num; i++)
    {
        fact=fact*i;
    }
    if(num>0)
    cout<<"Factorial of "<<num<<" is "<<fact;
    else if(num==0)
    cout<<"Factorial of "<<num<<" is "<<1;
    else
    cout<<"N.D.";
    return 0;
}