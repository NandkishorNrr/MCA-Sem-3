#include <iostream>
#include <conio.h>
using namespace std;

class stack
{
private:
    struct node
    {
        int val;
        struct node *next;
    };
    node *top;

public:
    stack();
    void push(int data);
    void pop();
    void display();
};
stack::stack()
{
    top = NULL;
}
void stack::push(int data)
{
    node *temp;
    temp = new node;
    temp->val = data;
    temp->next = top;
    top = temp;
}
void stack::pop()
{
    node *temp ;
    if (top == NULL)
    {
        cout << "Stack is empty.\n";
        return;
    }
    else
    {
        temp=top;
        top = top->next;
        cout << temp->val << " has been deleted.\n";
        delete temp;
    }
}
void stack::display()
{
    if (top == NULL)
        cout << "Stack is empty.\n";
    else
    {
        node *temp = top;
        do
        {
            cout << temp->val << "\t";
            temp = temp->next;
        } while (temp != NULL);
        cout<<"\n";
    }
}
int main()
{
    system("CLS");
    stack s1;
    int ch;
    while (1)
    {
        // system("CLS");
        cout << "1. Push.\n";
        cout << "2. Pop.\n";
        cout << "3. Display.\n";
        cout << "4. Exit.\n";
        cout << "\nEnter your choice.\n";
        cin >> ch;
        cout << "\n\t***\n";
        switch (ch)
        {
        case 1:
            int data;
            cout << "Enter data.\n";
            cin >> data;
            s1.push(data);
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
            cout << "Invalid choice.\n";
        }
        getch();
    }
    return 0;
}