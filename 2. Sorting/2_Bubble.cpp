#include <bits/stdc++.h>
using namespace std;

void bubbleSort(int arr[], int n)
{
  // for (int i = n-1; i > 0; i--)
  // {
  
  //   for (int j = 0 ; j < i-1; j++){
  //     if (arr[j] > arr[j+1]){
  //       swap(arr[j], arr[j+1]);
  //     }
  //   }

  // }

  /// ABDUL BAARI-------------------
  
  for (int i = 0; i < n - 1; i++)
  {
    int didSwap = 0;
    for (int j = 0; j < n-1-i; j++)
    {
      if (arr[j] > arr[j + 1])
      {
        swap(arr[j], arr[j + 1]);
        didSwap=1;
      }
    }
    if(didSwap==0) break;
  }
  
//------------------------------------
  cout << "Sorted array : ";
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
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
  return 0;
}