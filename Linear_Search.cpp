#include<iostream>
using namespace std;

void Linear_search(int arr[],int n)
{
    int target, track=0;
    cout << "Find The Number :";
    cin >> target;
    for(int i =0;i<n;i++)
    {
        if(arr[i]==target)
        {
            cout << "The Number" <<" "<< target <<" "<<"is found at position "<< i+1 << endl;
            track=1;
            break;
        }
    }
    if(track==0)
    {
        cout<< "Number is not found" << endl;
    }

}

int main()
{
    int n;
    cout << "The number of elements :";
    cin  >> n;
    int arr[n];
    cout<< "Enter the elements:"<< endl;
    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
    }
    Linear_search(arr,n);

}