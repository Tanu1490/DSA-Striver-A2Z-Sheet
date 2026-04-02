#include<bits/stdc++.h>
using namespace std;
 
// TC - O(N^2)
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