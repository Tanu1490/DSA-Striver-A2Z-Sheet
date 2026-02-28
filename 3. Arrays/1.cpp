#include<bits/stdc++.h>
using namespace std;


int main(){

    // Largest element in an array
    
    // Brute force
    int n;
    cout<<"Enter the size of array:";
    cin>>n;
    int arr[n];

    cout<<"Enter elements of array : ";
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }

    sort(arr, arr + n);

    cout<<"largest element is : "<<arr[n-1]<<endl;

    // optimal
    int largest = arr[0];
    for(int i = 0 ; i < n ; i++){
        if(arr[i] > largest) largest = arr[i];
    }

    cout<<"largest element is : "<<largest;




return 0;
}