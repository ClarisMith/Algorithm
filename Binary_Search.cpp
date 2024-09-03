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
int Binary_Search(int arr[],int n,int target)
{   
    int lower = 0;
    int upper = n-1;
    while(lower<=upper)
    {
        int mid = (upper+lower)/2;
        if(arr[mid]==target)
        {
            return mid;
        }
        else if(target<arr[mid])
        {
            upper=mid-1;
        }
        else
        {
            lower=mid+1;
        }
    }
    return -1;
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
    int target;
    cout << "Find the number:";
    cin >> target;
    int a = Binary_Search(arr,n,target);
    if(a == -1)
    {
        cout<< "The Number is not found" << endl;
    }
    else
    {
        cout << "The Number" <<" "<<target << " " << "is"<<" "<< a << " "<< "no. index"<< endl;
    }
    
}