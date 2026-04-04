#include <bits/stdc++.h>
using namespace std;

void bubbleSort(int arr[], int n){

  // BRUTE FORCE - O(n^2) -> worst & avg case
  // for(int i = n-1 ; i >= 0 ; i--){
  //   for(int j = 0 ; j <= i-1 ; j++){
  //     if(arr[j] > arr[j+1]){
  //       // swap
  //       int temp = arr[j+1];
  //       arr[j+1] = arr[j];
  //       arr[j] = temp;
  //     }
  // }
  // }

  // OPTIMIZED - O(n) -> best case (when array is already sorted)
  for(int i = n-1 ; i >= 0 ; i--){
    int didSwap = 0;
    for(int j = 0 ; j <= i-1 ; j++){
      if(arr[j] > arr[j+1]){
        // swap
        int temp = arr[j+1];
        arr[j+1] = arr[j];
        arr[j] = temp;
        didSwap = 1;
        }
      }
      if(didSwap == 0){
          break;
      }
  }
  
}

int main()
{
  int n;
  cout << "size of array: ";
  cin >> n;
  int arr[n];
  cout << "Enter elements of array :  ";
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  bubbleSort(arr, n);
  
   cout <<"Sorted array : ";
  for (int i = 0; i < n; i++)
  {
     cout<<arr[i] << " ";
  }
  return 0;
}