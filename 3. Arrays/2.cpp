#include<bits/stdc++.h>
using namespace std;

int main(){
// Second largest /smallest element in an array

// brute force
 int n;
    cout<<"Enter the size of array:";
    cin>>n;
    int arr[n];

    cout<<"Enter elements of array : ";
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }

    sort(arr, arr + n);
    int second_largest;
    int largest = arr[n-1];

    for(int i = n-2 ; i >= 0 ; i--){
        if(arr[i] != largest) {
            second_largest = arr[i];
            cout<<second_largest;
            break;
        }
    }
return 0;
}