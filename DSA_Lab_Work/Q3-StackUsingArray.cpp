#include<iostream>
#include<conio.h>
using namespace std;
const int MAX=10;
class stack
{
private:
    int top;
    int arr[MAX];
public:
    stack();
     void push(int data);
     void pop();
     void display();
};
stack::stack()
{
    top=-1;
}
void stack::push(int data)
{
    if(top==MAX-1)
    {
        cout<<"Stack is full.\n";
        return ;
    }
    else
    {
        top++;
        arr[top]=data;
    }
}
void stack::pop()
{
     if(top==-1)
     {
          cout<<"Stack is empty.\n";
     return ;
     }
     else
     {
         int data=arr[top];
         top--;
         cout<<data<<" is poped.\n";
     }
}
void stack::display()
{
    if(top==-1)
    cout<<"Stack is empty.\n";
    else
    {
        for (int i = top; i >=0; i--)
            cout<<arr[i]<<"\t";
    }
}
int main()
{
    stack s1;
    int n, value = 0;
    while (1)
    {
        system("CLS");
        cout << "1. Push in stack.\n";
        cout << "2. Pop from stack.\n";
        cout << "3. Display elements.\n";
        cout << "4.Exit.\n";
        cout << "\nEnter your choice.\n";
        cin >> n;
        switch (n)
        {
        case 1:
            cout << "Enter a number.\n";
            cin >> value;
            s1.push(value);
            break;
        case 2:
            s1.pop();
            break;
        case 3:
            s1.display();
            break;
        case 4:
            exit(0);
            break;
        default:
            cout << "Invalid choice.";
        }
        getch();
    }
}
