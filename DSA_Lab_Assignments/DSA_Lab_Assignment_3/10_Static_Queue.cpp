// Q:-10	WAP to demonstrate operations of a static queue.
#include <iostream>
#include <conio.h>
using namespace std;

const int MAX= 10;
int rear = -1;
int front = -1;
int arr[MAX];
void addqueue(int data)
{
    if (front == MAX - 1)
    {
        cout << "Queue is full.\n";
        return;
    }
    else
    {
        rear++;
        arr[rear] = data;
        if (front == -1)
            front = 0;
    }
}
int delqqueue()
{
    int data;
    if (front == -1)
    {
        cout << "Queue is empty.\n";
        return NULL;
    }
    data = arr[front];
    arr[front] = 0;
    if (front == rear)
        front = rear = -1;
    else
        front++;
    return data;
}

int main()
{
    system("CLS");
    int n, ch;
    int data;
    cout << "Enter number of elements you want to enter.\n";
    cin >> n;

    if (n <= 10)
    {
        cout << "Enter " << n << " elements in the queue.\n";
        for (int i = 0; i < n; i++)
        {
            cin >> data;
            addqueue(data);
        }
    }
    else
        cout << "You can not enter more than 10 values.\n";
    while (1)
    {
        getch();
        system("CLS");
        cout << "1. Add data in queue.\n";
        cout << "2. Display data of queue.\n";
        cout << "3. Delet data from queue.\n";
        cout << "4. Exit.\n\t***\n";

        cout << "Enter your choice.\n";
        cin >> ch;
        switch (ch)
        {
        case 1:
            cout << "Enter data.\n";
            cin >> data;
            addqueue(data);
            break;
        case 2:
            cout << "Data in the Queue.\n";
            if (front != -1)
                for (int i = front; i <= rear; i++)
                    cout << arr[i] << " ";
            else
                cout << "Queue is empty\n";
            break;
        case 3:
            cout << "Deleted data is :" << delqqueue();
            break;
        case 4:
            exit(0);
            break;
        default:
            cout << "Invailid choice.\n";
            return 0;
        }
    }
    return 0;
}