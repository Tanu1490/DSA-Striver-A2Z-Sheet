#include<bits/stdc++.h>
using namespace std;
 
// PQ: It’s like a normal queue, 
// but the biggest number comes out first (by default).

//  In a queue, the first-in-first-out rule is implemented
//  whereas, in a priority queue, the values are removed on 
//  the basis of priority. The element with the highest priority 
//  is removed first.

  // push() & pop() → O(log n)

  // top(), size(), empty() → O(1)

void explainPQ(){

    // ThIS IS MAX HEAP
  priority_queue<int> pq;
  pq.push(5);   // {5}
  pq.push(2); // {5, 2}
  pq.push(8); // {8, 5, 2}
  pq.emplace(10); // {10, 8, 5, 2}

  cout << pq.top(); //prints 10

  pq.pop(); // {8, 5, 2}

  cout << pq.top(); // prints 8

  // size swap empty function same as others


  // THIS IS MIN HEAP  -  will store min value on top
  priority_queue<int, vector<int> ,greater<int>> p;
  p.push(5);   // {5}
  p.push(2); // {2, 5}
  p.push(8); // {2,5,8}
  p.emplace(10); // {2,5,8,10}

  cout<<pq.top();  //prints 2


}

int main(){
  explainPQ();
  return 0;
}