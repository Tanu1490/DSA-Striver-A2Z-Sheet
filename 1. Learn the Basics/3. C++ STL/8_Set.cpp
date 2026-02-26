#include<bits/stdc++.h>
using namespace std;

//Sets stores unique elements in some sorted order.
// set is implemented as a balanced Binary search tree 
// so all main operations are O(log n) in time.

void explainSet(){
  set<int> st;
  st.insert(1); // {1}
  st.emplace(2); // {1, 2}
  st.insert(2); // {1, 2}    will not store 2 as it already exist (keeping set unique)
  st.insert(4); // {1, 2, 4}
  st.insert(3); // {1, 2, 3, 4}

// Functionality of insert in vector
// can be used also, that only increases
// efficiency

// begin(), end(), rbegin(), rend(), size(),
//empty() and swap() are same as those of above

// (1, 2, 3, 4, 5)
auto i = st.find(3);   // it returns iterator that points to 3
// to get value use *it

// (1, 2, 3, 4, 5)
auto t = st.find(6);    // 6 not exist so it points to st.end() iterator

// (1, 2, 3, 4, 5)
st.erase(5); // erases 5 , st={1,2,3,4} , takes logarithmic time

// count the instance of element that will be 1 
//as each element exist only 1 times 

int cnt = st.count(1);   //if 1 is there , returns 1 otherwise 0
                         // takes constant time

//erase multiple elements
// {1,2,3,4}
auto it1=st.find(2);
auto it2=st.find(4);
st.erase(it1,it2);     // works as erase [ start,end )
//{ 1,4}


// lower_bound() and upper_bound() function works in the same way
// as in vector it does.

// 🔹 lower_bound(2)
// Returns an iterator to the first element ≥ 2.
// If 2 is present → points to 2
// If 2 is not present → points to the next greater element

// 🔹 upper_bound(3)
// Returns an iterator to the first element > 3
// Skips 3 even if it exists

// This is the syntax:
//{1,2,3,4}
auto x =  st.lower_bound(2);  //return iter. pointing to 2
auto y=  st.upper_bound(3);   // return iter. pointing to 4


}

int main(){
  explainSet();
  return 0;
}