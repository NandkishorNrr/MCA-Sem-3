// 3. WAP to print table of a given number.
#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter number.\n";
    cin>>num;
    for (int i = 1; i <=10; i++)
    {
        cout<<i*num<<endl;
    }
    return 0;
}