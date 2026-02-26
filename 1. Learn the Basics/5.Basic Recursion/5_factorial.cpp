#include<bits/stdc++.h>
using namespace std;
 

//FACTORIAL USING LOOPS
void func(int n, int fac){
   for(int i=n;i>=1;i--){
    fac*=i;
   }
   cout<<fac;
  
}

int main(){
  int n;
  cin>>n;
  func(n,1);
  return 0;
}

//FACTORIAL USING RECURSION

// int print(int i)
// {
//   if(i==0) return 1; 
//   return i * print(i-1);
// }

// int main(){
//   int n;
//   cin>>n;
//   cout<<print(n);
// }


