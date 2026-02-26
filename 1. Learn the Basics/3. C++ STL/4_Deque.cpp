#include<bits/stdc++.h>
using namespace std;
 
// Deque container :
// provides fast insertion and deletion 
// at both ends. Stands for Double Ended QUEue, it is a 
// special type of queue where insertion and deletion operations 
// are possible at both the ends in constant time complexity.

void explainDeque(){
  deque<int> dq;
  dq.push_back(1);  // {1}
  dq.emplace_back(2);  // {1, 2}
  dq.push_front(4); // {4, 1, 2}
  dq.emplace_front(3); // {3, 4, 1, 2}

  dq.pop_back(); // {3, 4, 1}
  dq.pop_front(); // {4, 1}

  cout<<dq.back();


  cout<<dq.front();


// rest functions same as vector
// begin, end, rbegin, rend, clear, insert, size, swap
}


int main(){
  explainDeque();
  return 0;
}