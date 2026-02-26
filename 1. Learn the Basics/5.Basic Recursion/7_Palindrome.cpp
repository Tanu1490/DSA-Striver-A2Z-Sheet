#include<bits/stdc++.h>
using namespace std;

// CHECK PALINDROME

// bool f(string s,int i){
//   if(i>=s.size()/2) return true;
//   if(s[i]!=s[s.size()-i-1]) return false;
//   return f(s,i+1);
// }
// int main(){
//     string s;
//     cin>>s;
//     cout<<boolalpha;
//     cout<<"Palindrome: "<<f(s,0);
   
// }

bool f(string s){
  for(int i = 0; i<s.size()/2 ; i++){
    if(s[i]!=s[s.size()-i-1]) return false;
  }
  return true;
}

int main(){
    string s;
    cin>>s;
    cout<<boolalpha;
    cout<<"Palindrome: "<<f(s);
   
}

