#include <bits/stdc++.h>
using namespace std;

void bubbleSort(int arr[], int n)
{
  
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