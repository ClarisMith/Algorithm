#include<iostream>
using namespace std;

void swap(int& a, int& b) 
{
  int temp = a;
  a = b;
  b = temp;
}

void BubbleSort(int arr[],int n)
{
    for(int ph=0;ph<n-1;ph++)
    {
        int flag=0;
        for(int i=0;i<n-1-ph;i++)
        {
            if(arr[i]>arr[i+1])
            {
                swap(arr[i],arr[i+1]);
                flag=1;
            }
        }
        if(flag==0)
        {
            break;
        }
    }
}

void printArray(int arr[], int n) 
{
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;
}
int main()
{
    int n;
    cout << "The size of the array :";
    cin>>n;
    cout << "Enter the elements:" << endl;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
    }
    BubbleSort(arr,n);
    cout << "Sorted Array:" <<endl;
    printArray(arr,n);
}