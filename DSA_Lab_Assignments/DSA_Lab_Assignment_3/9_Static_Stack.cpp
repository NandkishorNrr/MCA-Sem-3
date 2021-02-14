// Q:-9	WAP to demonstrate operations of a static stack.
#include <iostream>
using namespace std;
int MAX = 10;
int stack[10], top = -1, n;
void push(int v)
{
    if (top == MAX - 1)
        cout << "Stack is full.";
    else
    {
        top++;
        stack[top] = v;
    }
}
int pop()
{
    int temp;
    if (top == -1)
        cout << "Stack is empty.";
    else
    {
        temp = stack[top];
        top--;
    }
    return temp;
}
void disp()
{
    if (top == -1)
        cout << "Stack is empty";
    else
    {
        cout<<"Elements in the array are.\n";
        for (int i = top; i >= 0; i--)
            cout << stack[i] << "\t";
    }
}
int main()
{
    system("CLS");
    int value, choice;
    cout << "Enter number of elements.\n";
    cin >> n;
    cout << "Enter " << n << " elements.\n";
    if (n < MAX)
        for (int i = 0; i < n; i++)
        {
            cin >> value;
            push(value);
        }
    else
        cout << "You can push less than or equal to 10 numbers.";
    while (1)
    {
        cout << "\n1. Push.\n";
        cout << "2. Pop.\n";
        cout << "3. Display.\n";
        cout << "4. Exit.\n";
        cout << "\t***\nEnter your choice.\n";
        cin >> choice;
        switch (choice)
        {
        case 1:
            int val;
            cout << "Enter a vlue.\n";
            cin >> val;
            push(val);
            break;
        case 2:
            cout << "Poped value "<<pop()<<"\n\n";
            break;
        case 3:
            disp();
            break;
        case 4:
            exit(0);
            break;
        default:
            cout << "Invailid choice.";
        }
    }
}