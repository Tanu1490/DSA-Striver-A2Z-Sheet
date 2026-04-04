#include<bits/stdc++.h>
using namespace std;
 
// TC - O(N^2) 
// OPTIMIZED - O(n) -> best case (when array is already sorted)
void insertionSort(int arr[] , int n){
  for(int i = 0 ; i <= n-1 ; i++){
    int j = i;
    while(j > 0 && arr[j-1] > arr[j]){
      int temp = arr[j];
      arr[j] = arr[j-1];
      arr[j-1] = temp;
      j--;
    }
  }


  // This version is used everywhere
//   void insertionSort(int arr[], int n){
//     for(int i = 1; i < n; i++){
//         int key = arr[i];
//         int j = i - 1;

//         while(j >= 0 && arr[j] > key){
//             arr[j + 1] = arr[j];
//             j--;
//         }

//         arr[j + 1] = key;
//     }
// }
 
}


int main(){
  int n;
  cout << "size of array: ";
  cin >> n;
  int arr[n];
  cout << "Enter elements of array :  ";
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  insertionSort(arr, n);
  
  cout <<"Sorted array : ";
  for (int i = 0; i < n; i++)
  {
     cout<<arr[i] << " ";
  }
  return 0;
}