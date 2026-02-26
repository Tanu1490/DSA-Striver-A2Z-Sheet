#include<bits/stdc++.h>
using namespace std;
 
// REVERSE AN ARRAY

//COPY INPUT ARRAY TO OTHER ARRAY IN BACKWARD DIRECTION

// void print(int ans[],int n){
//     cout<<"Reversed Array: ";
//     for(int i=0 ; i<n ; i++ ) cout<<ans[i]<<" ";
// }
// void rev(int arr[],int n){
//     int ans[n];
//     for(int i=0 ; i<n ; i++ ){
//         ans[i]=arr[n-i-1];
//     }
//     print(ans,n);
    
// }
// int main(){
//     int n;
//     cout<<"Size of array: "; 
//     cin>>n;
//     int arr[n];
//     for(int i=0 ; i<n ; i++ ) cin>>arr[i];
//     rev(arr,n);
// }

// RECURSION WITH 2 PTR

// void reverse(int arr[],int start , int end){
//   if(start>=end) return;
//   swap(arr[start],arr[end]);
//   reverse(arr,start+1,end-1);
// }
// int main(){
//     int n;
//     cout<<"Size of array: "; 
//     cin>>n;
//     int arr[n];
//     for(int i=0 ; i<n ; i++ ) cin>>arr[i];

//     reverse(arr,0,n-1);
//     for(int i=0 ; i<n ; i++ ) cout<<arr[i]<<" ";
// }

// RECURSION WITH 1 PTR

// void f(int i, int arr[] , int n){
//   if(i>=(n/2)) return;
//   swap(arr[i],arr[n-i-1]);
//   f(i+1,arr,n);
// }

// int main(){
//     int n;
//     cout<<"Size of array: "; 
//     cin>>n;
//     int arr[n];
//     for(int i=0 ; i<n ; i++ ) cin>>arr[i];
//     f(0,arr,n);
//     for(int i=0 ; i<n ; i++ ) cout<<arr[i]<<" ";
// }




// RECURSION WITH reverse FUNCTION

// void r(int arr[],int n){
//   reverse(arr,arr+n);
// }
// int main(){
//     int n;
//     cout<<"Size of array: "; 
//     cin>>n;
//     int arr[n];
//     for(int i=0 ; i<n ; i++ ) cin>>arr[i];
//     r(arr,n);
//     for(int i=0 ; i<n ; i++ ) cout<<arr[i]<<" ";
// }
