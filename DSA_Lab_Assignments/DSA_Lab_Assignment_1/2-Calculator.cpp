// 2. WAP to perform calculator operations:- +, -, *, /, %
#include<iostream>
using namespace std;
int main()
{
    int n, a, b, res;
    while (1)
   {
    cout<<"1. Add two numbers.\n";
    cout<<"2. Subtract two numbers.\n";
    cout<<"3. Multiply two numbers.\n";
    cout<<"4. Divide two numbers.\n";
    cout<<"5. Exit\n";
   
        cout << "Enter your choice.\n";
    cin >> n;
    switch (n)
    {
    case 1:
        cout<<"Enter two numbers.\n";
        cin>>a>>b;
        res=a+b;
        cout << "Sum is "<<res;
        break;
    case 2:
         cout<<"Enter two numbers.\n";
        cin>>a>>b;
        res=a-b;
        cout << "Subtraction is "<<res;
        break;
    case 3:
         cout<<"Enter two numbers.\n";
        cin>>a>>b;
        res=a*b;
        cout << "Multiplication is "<<res;
        break;
    case 4:
         cout<<"Enter two numbers.\n";
        cin>>a>>b;
        res=a/b;
        cout << "Division is "<<res;
        break;
    case 5:
        exit(0);
    default:
        cout << "Invalid choice.";
        break;
    }
   }
return 0;
}