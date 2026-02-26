#include<bits/stdc++.h>
using namespace std;
 

// Unordered_set stores unique elements.
// TC is O(1) for search, insert, and delete operations 
// but the elements are not sorted in any particular order.

// lower bound and upper bound function does not works, 
//rest all functions are same
// as above, it does not stores in any
// particular order it has a better complexity
// than set in most cases, except some when collision happens

void explainUS(){
    unordered_set<int> us;
    us.insert(1);
    us.insert(8);
    us.insert(5);
    us.insert(4);
    us.insert(5);  //will not store this as 5 already exist

    for(auto it:us){
        cout<<it<<" ";
    }
    cout<<endl;

    auto t=us.find(8);
    cout<<*(t);       //prints 8 if found

    us.erase(8);
    for(auto it:us){
        cout<<it<<" ";
    }

}

int main(){
  explainUS();
  return 0;
}