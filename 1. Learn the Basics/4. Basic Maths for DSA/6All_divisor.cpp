#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin >> n;
  // cout<<"All divisors are: ";
  // for(int i =1;i<=n;i++){
  //     if(n%i == 0) cout<<i<<" ";
  // }

  // OPTIMAL TC O(sqrt n) SC O(no of factors)
  vector<int> v;
  for (int i = 1; i * i <= n; i++)
  {
    if (n % i == 0)
    {
      v.emplace_back(i);

      if (n / i != i)
      {
        v.emplace_back(n / i);
      }
    }
  }

  sort(v.begin(), v.end());
  cout << "All divisors are: ";
  for (auto it : v)
  {
    cout << it << " ";
  }
  return 0;
}