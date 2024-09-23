#include <iostream>
using namespace std;
int arr[100], n = 100, front = -1, rear = -1;
void Insert()
{
    int val;
    if (rear == n - 1)
        cout << "Queue Overflow" << endl;
    else
    {
        if (front == -1)
            front = 0;
        cout << "Insert the element in queue : " << endl;
        cin >> val;
        rear++;
        arr[rear] = val;
    }
}
void Delete()
{
    if (front == -1 || front > rear)
    {
        cout << "Queue Underflow ";
        return;
    }
    else
    {
        cout << "Element deleted from queue is : " << arr[front] << endl;
        front++;
        ;
    }
}
void peek()
{
    if (front == -1)
    {
        cout << "Queue is empty" << endl;
   
    }
    else
    {
        cout << "First element is : "<<arr[front] << endl;
    }
}
void Display()
{
    if (front == -1)
        cout << "Queue is empty" << endl;
    else
    {
        cout << "Queue elements are : ";
        for (int i = front; i <= rear; i++)
            cout << arr[i] << " ";
        cout << endl;
    }
}
int main()
{
    int ch;
    cout << "1) Insert element to queue" << endl;
    cout << "2) Delete element from queue" << endl;
    cout << "3) The first element:" << endl;
    cout << "4) Display all the elements of queue" << endl;
    cout << "5) Exit" << endl;
    do
    {
        cout << "Enter your choice : " << endl;
        cin >> ch;
        switch (ch)
        {
        case 1:
            Insert();
            break;
        case 2:
            Delete();
            break;
        case 3:
            peek();
            break;
        case 4:
            Display();
            break;
        case 5:
            cout << "Exit" << endl;
            break;
        default:
            cout << "Invalid choice" << endl;
        }
    } while (ch != 5);
    return 0;
}