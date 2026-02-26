#include<bits/stdc++.h>
using namespace std;
 
int main(){
  int n1,n2;
  cin>>n1>>n2;

  //BRUTE FORCE TC O(MIN(A,B)) SC O(1)
  // int gcd =1;
  // for(int i=1; i<=min(n1,n2); i++ ){
  //  if(n1%i == 0 && n2%i == 0){
  //   gcd = i;
  //  }
  // }
  // cout<<gcd;


// BETTER APPROACH 
  // int gcd = 1;
  // for(int i=min(n1,n2); i>=1; i-- ){
  //  if(n1%i == 0 && n2%i == 0){
  //   gcd = i;
  //   cout<<gcd;
  //   break;
  //  }
  // }


  //OOPTIMAL APPROACH

  while(n1>0 && n2>0){
    if(n1>n2) n1=n1 % n2;
    else n2= n2 % n1;
  }
  if(n1==0) cout<<n2;
  else cout<<n1;
  return 0;
}