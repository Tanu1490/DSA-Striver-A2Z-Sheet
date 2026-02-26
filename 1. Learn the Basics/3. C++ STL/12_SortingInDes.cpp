#include<bits/stdc++.h>
using namespace std;
 
//SORTING


bool comp(pair<int,int> p1 , pair<int,int> p2 ){
    if(p1.second < p2.second) return true;
    if(p1.second > p2.second) return false;
    // if not both then we know both second element are same 

    if(p1.first > p2.first) return true;
    return false;
}

void extra(){
    
    // sort an array
    int a[]={1,3,2,5};

    int n = sizeof(a)/sizeof(a[0]);  
    // sizeof(a) = the total size of the array in bytes. 
    // 4 elements × 4 bytes (int size) = 16 bytes.
    //sizeof(a[0]) gives the size of the first element in the array.
    // a[0] is an int, so sizeof(a[0]) = 4 bytes.
    
    // n=16/4 = 4
    sort(a,a+n);
    for(auto it:a){
        cout<<it<<" ";
    }
    cout<<endl;


    //Sort vector 
    vector<int> v = {5, 3, 2, 1, 4};

    // Sort vector (by default in ascending order)
    sort(v.begin(), v.end());

    for (int i : v){
        cout << i << " ";
    }
    cout<<endl;


    // Sort in Descending order 
    // use comparator greater<int>()

    sort(a,a+n, greater<int>());
    for(auto it:a){
        cout<<it<<" ";
    }
    cout<<endl;


    //custom comparator  - see at top

    pair<int,int> x[] = {{1,2}, {2,1} , {4,1}};
    
    // we have to sort it according to second element
    // if second element is same, then sort
    // it according to first element but in descending

   int k = sizeof(x)/sizeof(x[0]);  
   // sizeof(x) → gives total size of the array in bytes.
   // sizeof(x[0]) → gives the size of one element (which is pair<int,int>) in bytes.
   // n → total number of elements = total size / size of one element.
   
   
   sort(x, x+k , comp);                  //comp will be of boolean type
   // final = {{4,1}, {2,1} , {1,2}}

   for (auto p : x) {       // efficient to use auto &
    cout << "{" << p.first << "," << p.second << "} ";
   }
   cout<<endl;

   // For simple types (like int), copying is cheap, 
   //so auto without & is fine.
   // For complex types like pair<int,int>, 
   //or big structs/classes, copying can be expensive. 
   //So auto& avoids the copy and improves performance.
   // Also, if you want to modify elements inside the loop, 
   //you need auto& (reference).
 
   int number = 7;
   int cn = __builtin_popcount(number);
   cout<<cn<<endl;       
   // counts number of 1s in binary of num 
   // 7 in binary = 1 1 1 so set bit = 3

   //Use __builtin_popcount() for int type.
   // For long long (64-bit), use __builtin_popcountll():

   long long num = 165786578687LL;
   int cnt = __builtin_popcountll(num);
   cout<<cnt<<endl; 
   //  Printing all permutations of a string in ascending order:
   string s = "123";
   sort(s.begin(), s.end());      
   // Ensure string is sorted to start with 
   //the smallest permutation so that all permutations 
   //can be printed

   do {
    cout << s << endl;         // Print current permutation
   } while (next_permutation(s.begin(), s.end()));   
   // Generate next permutation until all are printed

   // Finding maximum element in an array a of size n:
   int maxi = *max_element(a, a + n);
   // *max_element[start,end)

}


int main(){
  extra();
  return 0;
}