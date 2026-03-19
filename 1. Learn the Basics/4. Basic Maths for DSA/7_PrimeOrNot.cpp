#include <bits/stdc++.h>
using namespace std;

bool print(int n)
{
    //  ❌for(int i=2; i<=n-1; i++){
    //  ❌   if(n%i == 0) return false ;
    //  ❌   else return true;
    //  ❌ }
    // wrong approach because after checking 2 it returns and not check after 2

    //MY BRUTE FORCE TC O(N)  SC O(1)

    // if(n<=1) return false;
    // for(int i = 2; i<=n-1 ; i++){
    //   if (n%i == 0 ) return false;
    // }
    // return true;

    
    int cnt = 0;

    // STRIVER BRUTE FORCE  TC O(N)  SC O(1)
    // for (int i = 1; i <= n; i++){
    //     if (n % i == 0){
    //         cnt++;
    //     }
    // }

    //   OPTIMAL  TC O(SQTR(N))  SC O(1)
    for (int i = 1; i * i <= n; i++){
        if (n % i == 0){
            cnt++;
            if (n / i != i){
                cnt++;
            } 
        }
        if(cnt>2) break;
    }
    //optimize more use this condition and remove else 

    if (cnt == 2) return true;
    // else return false;
    return false;
}
int main()
{
    int n; 
    cin >> n;

    cout << boolalpha;
    cout << print(n);

    return 0;
}