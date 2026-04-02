#include<bits/stdc++.h>
using namespace std;
 
int main(){
  int n = 6;
  int arr[n] = {13,46,24,52,20,9} ;

  for(int i = n-1 ; i >=0 ; i-- ){

    for(int j = 0 ; j <= i-1 ; j++){
        if(arr[j] > arr[j+1]){
          int temp = arr[j];
          arr[j] = arr[j+1];
          arr[j+1] = temp;
        }
      
  }
  }

  for(int i= 0 ; i <= n-1 ; i++){
    cout<<arr[i]<<" ";
  }
  
  
  return 0;
}