#include <iostream>
using namespace std;

// Swap function 
void swap(int& a, int& b) {
  int temp = a;
  a = b;
  b = temp;
}

int partition(int arr[], int low, int high) {
  int pivot = arr[high]; // Set pivot to high value
  int i = low - 1; 

  for (int j = low; j <= high - 1; j++) {
    if (arr[j] < pivot) 
    {
      i++; 
      swap(arr[i], arr[j]);
    }
  }
  swap(arr[i + 1], arr[high]); // Swap pivot with element at correct position
  return (i + 1); 
}

// Quicksort function 
void quickSort(int arr[], int low, int high) {
  if (low < high) {
    int loc = partition(arr, low, high);
    quickSort(arr, low, loc - 1);
    quickSort(arr, loc + 1, high);
  }
}

// Print the array function 
void printArray(int arr[], int size) {
  for (int i = 0; i < size; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;
}

// Main function 
int main() 
{
    int n;
    cout << "The size of array :";
    cin >> n;
    cout << "Enter the elements:" << endl;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
    }
    quickSort(arr, 0, n - 1);
    cout << "Sorted array: \n";
    printArray(arr, n);
    return 0;
}
