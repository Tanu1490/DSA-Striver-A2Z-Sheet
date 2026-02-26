#include<bits/stdc++.h>
using namespace std;

//pass by reference for array does not work
//with & , it can work with other like vectors
//maps list they all go with &

//array always goes with refferel

void nex(int arr[],int n){
    arr[1]+=100;
    cout<<"value inside function: "<<arr[1]<<endl;
}

int main(){
    int n=5;
    int arr[n];
    cout<<"enter array elements:";
    for(int i=0;i<n;i++){
       cin>>arr[i];
    }
    nex(arr,n);
    cout<<"value inside main function:"<<arr[1];
    return 0;
}