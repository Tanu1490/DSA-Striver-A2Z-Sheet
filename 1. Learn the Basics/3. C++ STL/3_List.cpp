#include <bits/stdc++.h>
using namespace std;

void explainList()
{
  // List is also dynamic container
  // List stores  elements in a doubly-linked list,
  // where each element is a separate node containing
  // the data and pointers to the previous and next nodes.
  // The elements are not stored contiguously in memory.

  // Vector:Stores elements in contiguous memory locations,
  // similar to an array. This allows for efficient random access using index numbers.

  // List gives fast insertion and deletion at any position
  // because it only involves changing pointers.

  list<int> ls;
  ls.push_back(20);    // {20}
  ls.emplace_back(40); // {20,40}
  ls.push_front(10);   // {10,20,40}

  // l.push_front("Hello");         // Makes a string, then adds it
  // l.emplace_front("Hello");      // Creates string directly in-place

  // rest functions same as vector
  // begin, end, rbegin, rend, clear, insert, size, swap

  list<int> l = {1, 3, 4, 5, 6, 6};
  l.push_front(43);
  l.push_back(67);
  for (auto x : l)
  {
    cout << x << " ";
  }
  cout << endl;

  list<int> l1(5, 90);
  auto it = l1.begin();
  advance(it, 3); // it+3
  l1.insert(it, 56);
  advance(it, 1);
  l1.insert(it, 78);
  for (auto x : l1)
  {
    cout << x << " ";
  }
  cout << endl;

  list<string> l2 = {"Tom", "Com", "Pom"};
  for (list<string>::iterator it = l2.begin(); it != l2.end(); it++)
    cout << *it << " ";
  cout << endl;

  cout << l2.front() << endl;
  cout << *next(l2.begin(), 1) << endl; // function is used to move the begin() iteratortwo positions forward retrieves the value

  auto iet = find(l1.begin(), l1.end(), 90);
  if (iet != l1.end())
  {
    cout << "found" << endl;
  }
  else
  {
    cout << "not found" << endl;
  }

  l2.erase(l2.begin());
  for (auto x : l2)
  {
    cout << x << " ";
  }
  cout << endl;

  auto rem = l1.begin();
  advance(rem, 4);
  l1.erase(rem);
  for (auto x : l1)
  {
    cout << x << " ";
  }
  cout << endl;

  
}

int main()
{
  explainList();
  return 0;
}