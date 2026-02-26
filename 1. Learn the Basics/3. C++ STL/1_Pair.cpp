#include<bits/stdc++.h>
using namespace std;

// STL has mainly these:
// algo
// containers
// functions
// iterators
 
void explainPair(){
    pair<int,int> p={1,3};    // it can be int float double anything
    cout<<p.first<<" "<<p.second<<endl;   //access

    //to store multiple values use nested pair
    pair<int,pair<int,int>> q={1,{3,4}};
    cout<<q.first<<" "<<q.second.first<<" "<<q.second.second<<endl;

    //we can also declare pair array
    pair<int,int> arr[]={{1,2},{3,4},{5,6}};
    cout<<arr[1].first<<endl;

    //from gfg
    pair<string,int> s= make_pair("hi",4);    //can use make_pair to make pairs
    cout<<s.first<<" "<<s.second<<endl;

    //update value
    pair<int,int> t={3,9};
    t.first=5;
    cout<<t.first<<endl;

    //compare pairs
    pair<int,int> w={1,2};
    pair<int,int> x={4,8};
    pair<int,int> y={7,0};

    // printing result of comparision
    // boolalpha is a manipulator from the <iostream> library 
    // that makes boolean values (true/false) print as text 
    // instead of numbers. By default, true prints as 1 and 
    // false as 0.

    cout << boolalpha;
    cout << "w == x: " << (w == x) << endl;
    cout << "w != y: " << (w != y) << endl;
    cout << "w > y: " << (w > y) << endl;
    cout << "w < x: " << (w < x) << endl;
    cout << "w >= y: " << (w >= y) << endl;
    cout << "y <= w: " << (y <= w)<<endl;

    //Unpacking a Pair - A pair in C++ stores two values together. 
    // If you want to get those two values and put them 
    //into two separate variables, you can use the tie() function.

    pair<int,int> z={6 ,5};
    int a,b;

    tie(a,b)=z;
    cout<<"a: "<<a<<" "<<"b: "<<b;
    
}



int main(){
  explainPair();
  return 0;
}