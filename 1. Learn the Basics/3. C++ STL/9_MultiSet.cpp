#include<bits/stdc++.h>
using namespace std;

//Multiset is an container similar to the set, 
//but it can store multiple elements with same value in sorted order. 

void explainMS(){
  multiset<int> ms;
  ms.insert(1);    // {1}
  ms.insert(1);    // {1,1}
  ms.insert(2);    // {1,1,2}
  ms.insert(1);    // {1,1,1,2}

  for (auto it:ms){
    cout<<it;
  }

  ms.erase(1);  // all 1's deleted bcz erase(element)

  ms.erase(ms.find(1));   
  // points to the first 1
  // only single 1 will be deleted as erase(address of 1) is given
  // {1,1}

  ms.erase(ms.find(1),next(ms.find(1), 2));
  //next(ms.find(1), 2) moves iterator 2 steps forward  
  // it will erase both 1 ,range [first 1, 2nd 1)


  //rest all function are same as set

}

int main(){
  explainMS();
  return 0;
}