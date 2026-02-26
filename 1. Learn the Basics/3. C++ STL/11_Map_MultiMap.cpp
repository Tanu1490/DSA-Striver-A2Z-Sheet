#include<bits/stdc++.h>
using namespace std;

// A map stores data as key-value pairs.
// Each key is unique (no duplicates).
// By default, keys are stored in sorted (ascending) order.
// Values can be anything and are accessed using keys.
// You can change the sorting order using a custom comparator
//      map<int, string, greater<int>> m;   1->key  2->value 3-> custom comp
// Now, the keys will be sorted in descending order.

void explainMap(){
    // key and value can be of any datatype

   map<int,int> mp;     // key -> int   value-> int

   map<int ,pair<int,int>> mpp;  // key-> int    value-> pair(2 integers)

   map<pair<int,int>, int> m;   //key->pair(2 int)  value-> int

   mp[1]=3;     //to key 1 store 3
   mpp[1]={2,4};   // on key 1 store pair {2,4}

   mp.emplace(2,6);  // inserts key 2 → value 6

   mp.insert({3,7}); // inserts key 3 → value 7


   // for this map<pair<int,int>, int> m; 
   m[{2,3}]=10;   //storing the value 10 at the key pair (2, 3).


   for(auto it:mp){
    cout<<it.first<<" "<<it.second<<" ";    
   }cout<<endl;
   // (it) is each key-value pair in the map mp.
   // (it.first) is the key.
   // (it.second)is the value.
   //This loop will print all pairs in ascending order of keys.

   // prints the value at key 1 if exists, 
   //else 0 (default for int)
   cout<<mp[1]<<endl;  
   
   // since key 5 doesn't exist, inserts key 5 
   // with value 0 and prints 0
   cout<<mp[5]<<endl;


   auto it= mp.find(3);  
   if (it != mp.end())
        cout << it->first << " " << it->second;
    else cout << "Key not Found!";
  // it is an iterator pointing to the element 
  // with key 3 if found, else mpp.end().
  // it->second is the value stored at key 3.
  
   auto i = mpp.find(5); 
  // finds element with key 5 or returns 
  //mpp.end() if not found. 
  
   // This is the syntax
   auto t =mpp.lower_bound(2);
  // Returns iterator to the first element
  // whose key is >= 2 (or mpp.end() if none). 
 
   auto x =mpp.upper_bound (3);
   //Returns iterator to the first element 
   //whose key is > 3 (or mpp.end() if none).   

   // erase, swap, size, empty, are same as above

}

void explainMultimap() {
// everything same as map, only it can store multiple elements with same keys
// only mpp[key] cannot be used here 
 
  multimap<int, string> mm;
    
    // Inserting key-value pairs
    mm.insert({1, "Geeks"});
    mm.insert({2, "For"});
    mm.insert({1, "C++"});

    for(auto x: mm){
        cout << x.first << ": " << x.second<<" ";
    } 

   
}

void explainUnorderedMap() {
// same as set and unordered_Set ,difference is
//map: O(log n) in all cases (balanced BST, ordered keys).
//unordered_map: O(1) average, O(n) worst case due to hash
//collisions (unordered).

    unordered_map<int, string> um;
    
    // Insert elements using square brackets
    um[1] = "Geeks";
    
    // Insert elements using insert() method
    um.insert({2, "For"});
    um.insert({6, "C++"});
    um.insert({9, "C++"});
    um.insert({5, "C++"});


    for (auto i : um) 
        cout << i.first << ": " << i.second<< endl;
}


int main(){
  explainMap();
   explainMultimap();
    explainUnorderedMap() ;
  return 0;
}