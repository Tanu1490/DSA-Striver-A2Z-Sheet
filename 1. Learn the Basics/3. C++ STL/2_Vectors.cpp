#include <bits/stdc++.h>
using namespace std;

void explainVector()
{
  // vector stores element same as arrays
  //  but arr are fixed and vectors are dynamic
  //  can be changed after declecration unlike arrays

  vector<int> v;     // creates empty container
  v.push_back(1);    // push 1 in container i.e {1}
  v.emplace_back(2); // dynamically increase size and push 2 i.e {1,2}
  v.emplace_back(3);
  v.emplace_back(4);
  v.emplace_back(6);
  v.emplace_back(7);
  cout << v[0] << endl;

  // we can define vector of pair datatype
  vector<pair<int, int>> vec;
  vec.push_back({1, 2});  // need to write {} to show it is pair
  vec.emplace_back(7, 8); // automatically understand it is pair,no need of {}
                          // Print each pair in the vector using a loop
  for (auto item : vec)
  {
    cout << "(" << item.first << ", " << item.second << ") ";
  }
  cout << endl;

  // declare vector with size and value
  vector<int> x(5, 100); // size=5 {100,100,100,100,100}

  vector<int> y(5); // size=5  {0,0,0,0,0} or any garbage value
                    //  depending on compiler
                    //  we can always increase size even if it is
                    // already predefined

  vector<int> v1(5, 20); // size =5 {20,20,20,20,20}

  // copy values of 1 vector to other vector
  vector<int> v2(v1);

  // access elements in vector

  // 1.  print like arrays i.e v[index]
  //  2. other way -ITERATORS

  //  a. begin iterator

  // above we have v={1,2,3,4,6,7}
  vector<int>::iterator it = v.begin(); // v.begin will point to starting memory add. i.e mem add of 1
  cout << *(it) << " ";                 // *it i.e *(v.begin) points to value in that mem.
  // o/p = 1

  it++; // it + 1 = next mem add
  cout << *(it) << " ";
  // o/p = 2

  it += 2;
  cout << *(it) << " " << endl;
  // o/p = 4

  // b. end
  // points to mem. add just the last element
  // i.e after 4 so do it-- to point to mem
  // add of 4
  vector<int>::iterator a = v.end();

  // not usually used

  //  c. rend - reverse end
  // array is reversed then point to mem. add just after
  // last  element ,use b-- to point to last element
  vector<int>::reverse_iterator b = v.rend();

  // d. rbegin - reverse array and points to mem add of 1st lement
  vector<int>::reverse_iterator c = v.rbegin();

  cout << v[0] << " " << v.at(1) << endl; //.at(index) not usually used

  cout << v.back() << " " << endl; // points to last element

  // 3. use LOOPS
  for (vector<int>::iterator d = v.begin(); d != v.end(); d++)
  {
    cout << *(d) << " ";
  }
  cout << endl;

  // 4. use Auto
  // shortcut to not write vector<int>::iterator
  // use auto which automatically assign datatype according to data

  for (auto f = v.begin(); f != v.end(); f++)
  {
    cout << *(f) << " ";
  }
  cout << endl;

  // 5. For Each loop

  // auto goes to mem. add , see int data , assign int datatype
  // that's why no need of *
  //(auto j : v ) means: for each element j in vector v

  for (auto j : v)
  {
    cout << j << " ";
  }
  cout << endl;

  // Delete vector

  // for single value
  v.erase(v.begin() + 1); // o/p={1,3,4,6,7}
  for (auto j : v)
  {
    cout << j << " ";
  }
  cout << endl;

  // for deleting multiple values
  // give erase(start,end) where it is like [start,end)
  // means end value not included

  v.erase(v.begin() + 1, v.begin() + 3);
  // o/p={1,6,7}
  for (auto j : v)
  {
    cout << j << " ";
  }
  cout << endl;

  // INSERT
  vector<int> s(2, 100);
  s.insert(s.begin(), 35);        // insert 35 at start {35,100,100}
  s.insert(s.begin() + 2, 3, 40); // insert at 3rd position, 3 times 40 {35,100,40,40,40,100}

  // copy one vector to other
  vector<int> lets_copy(2, 400);
  s.insert(s.begin(), lets_copy.begin(), lets_copy.end());
  // s={400 400 35 100 40 40 40 100}

  // size of vector
  cout << s.size() << endl;

  // Pop last element
  s.pop_back();
  // s={400 400 35 100 40 40 40}

  // swap vector
  lets_copy.swap(s);
  for (auto m : lets_copy)
  {
    cout << m << " ";
  }
  cout << endl;
  for (auto r : s)
  {
    cout << r << " ";
  }

  // erase entire vector
  s.clear();

  // check if vector empty or not
  cout << s.empty();
}

int main()
{
  explainVector();
  return 0;
}