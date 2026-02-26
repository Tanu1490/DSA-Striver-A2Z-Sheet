 #include<bits/stdc++.h>

using namespace std;

int main(){
    /*1D array*/
    int arr[5];
    cout<<"Enter array elements:"<<endl;
    cin>>arr[0]>>arr[1]>>arr[2]>>arr[3]>>arr[4];
    cout<<arr[3]<<endl;
     
    arr[1]+=3;
    cout<<arr[1];

   /*2D array*/
   int num[2][3];
   cout<<"enter the numbers:"<<endl;
   cin>>num[0][0]>>num[0][1]>>num[0][2]>>num[1][0]>>num[1][1]>>num[1][2];

   cout<<num[1][1]; 
  /*if we don't define any value some garbage value will be alloted*/

    string t="tanu";
    cout<<t[3]<<endl;
    int len=t.size();
    cout<<t[len-1]<<endl; /*another way to find last element*/
    cout<<t.size()<<endl;  /*size of array*/

    /*can also change value of string*/
    t[2]='r';
    cout<<t[2];
    

   return 0;
}