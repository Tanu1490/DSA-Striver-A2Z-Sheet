#include<bits/stdc++.h>
using namespace std;
 
void explainStack(){
  // Stack works on LIFO (Last IN First OUT)
  //means element which went last in stack will come out first
  //All operations are O(1)
  //except comparison (==, !=) which is O(n).


  stack<int> st;
  st.push(1);  // {1}
  st.push(2);  // {2,1}
  st.push(3);  // {3,2,1}
  st.push(4);  // {4,3,2,1}
  st.emplace(5);  //{5,4,3,2,1}    //can also use push

  cout<<st.top()<<endl;    //print 5 and doesn't remove it
                          // st[index] is inavlid as there is no concept of index"

  st.pop();  // 5 is popped out and deleted from stack
            // st={4,3,2,1}
  
  cout<<st.top()<<endl;   // print 4

  cout<<st.size()<<endl;

  // swapping
  stack<int> st1,st2;
  st1.swap(st2);
}
int main(){
  explainStack();
  return 0;
}