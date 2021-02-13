// 1. WAP to print table of numbers from 1 to 10.
#include<iostream>
using namespace std;
int main()
{
    int n, t;
    cout<<"Table 1 to 10.\n";
    for (int i = 1; i <=10; i++)
    {
        for (int j = 1; j <= 10; j++)
        {
            cout<<j*i<<"\t";
        }
        cout<<endl;
    }
    return 0;
}
