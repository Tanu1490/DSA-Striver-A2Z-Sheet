#include<bits/stdc++.h>
using namespace std;

void nex(int arr[],int n){
  arr[4]-=10;
  cout<<"value inside function:"<<arr[4]<<endl;
}

int main(){
    int n=6;
    int arr[n];
    cout<<"enter array elemnents:"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    nex(arr,n);
    cout<<"value inside function:"<<arr[4]<<endl;
    return 0;
}