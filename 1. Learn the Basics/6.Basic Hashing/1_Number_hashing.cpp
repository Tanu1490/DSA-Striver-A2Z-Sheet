#include <bits/stdc++.h>
using namespace std;

// NUMBER HASHING USING LOOPS
void byLoop(int arr[], int n, int q)
{

  while (q--)
  {
    int number;
    cin >> number;

    int count = 0;
    for (int i = 0; i < n; i++)
    {
      if (arr[i] == number)
        count++;
    }

    cout << number << " appears : " << count << " times " << endl;
  };
}


// PROBLEM WITH LOOPS & NEED FOR HASHING
// Time complexity:
// For every query you scan the whole array → O(n * q).
// Fine for small sizes, but can be slow if both n and q are large.


// NUMBER HASHING USING HASH ARRAY

void hashing(int arr[], int n)
{
  // PRE-STORING
  int maxSize = *max_element(arr, arr + n); // this will give largest number in array
  int hash[maxSize + 1] = {0};              // suppose if max element = 12 then size will be 13 (0-12)
  for (int i = 0; i < n; i++)
  {
    hash[arr[i]] += 1;
  }

  int q;
  cout << "Enter no. of queries : ";
  cin >> q;
  while (q--)
  {
    int number;
    cin >> number;

    // FETCHING

    cout << number << " appears : " << hash[number] << " times " << endl;
  };
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

  int q;
  cout << "Enter no. of queries : ";
  cin >> q;

  byLoop(arr, n, q);
  // hashing(arr,n);

  return 0;
}
