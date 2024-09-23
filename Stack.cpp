#include <iostream>
using namespace std;
int arr[100], n = 100, top = -1;
void push(int val)
{
    if (top >= n - 1)
        cout << "Stack Overflow" << endl;
    else
    {
        top++;
        arr[top] = val;
    }
}
void pop()
{
    if (top <= -1)
        cout << "Stack Underflow" << endl;
    else
    {
        cout << "The popped element is " << arr[top] << endl;
        top--;
    }
}
void peek()
{
    if (top >= 0)
    {
    cout << arr[top] << endl;
    }
    else
    {
        cout << "Stack is empty"<<endl;
    }
}
void display()
{
    if (top >= 0)
    {
        cout << "Stack elements are:";
        for (int i = top; i >= 0; i--)
            cout << arr[i] << " ";
        cout << endl;
    }
    else
        cout << "Stack is empty"<< endl;
}
int main()
{
    int ch, val;
    cout << "1) Push in stack" << endl;
    cout << "2) Pop from stack" << endl;
    cout << "3) The Last element" << endl;
    cout << "4) Display stack" << endl;
    cout << "5) Exit" << endl;
    do
    {
        cout << "Enter choice: " << endl;
        cin >> ch;
        switch (ch)
        {
        case 1:
        {
            cout << "Enter value to be pushed:" << endl;
            cin >> val;
            push(val);
            break;
        }
        case 2:
        {
            pop();
            break;
        }

        case 3:
        {
            peek();
            break;
        }
        case 4:
        {
            display();
            break;
        }
        case 5:
        {
            cout << "Exit" << endl;
            break;
        }
        default:
        {
            cout << "Invalid Choice" << endl;
        }
        }
    } while (ch != 5);
    return 0;
}