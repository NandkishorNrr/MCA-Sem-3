// 1. WAP to print your name 100 times.
#include<iostream>
using namespace std;
int main()
{
    string name;
    cout<<"Enter your name to print 100 times.\n";
    cin>>name;
    for (int i = 1; i <=100 ; i++)
      {
        cout<<i<<". "<<name<<endl;
    }
    return 0;
}