#include<bits/stdc++.h>
using namespace std;

//QUEUE - works on FIFO (First In First Out)
// means 1st element will come first

//All operations are O(1) 
//except comparison (==, !=) which is O(n).

void explainQueue(){
    queue<int> q;
    q.push(1);   // {1}
    q.push(2);   // {2,1}
    q.push(3);   // {3,2,1}
    q.push(14);   // {4,3,2,1}
    q.emplace(5);   // {5,4,3,2,1}

    q.back()+=5;

    cout<<q.back()<<endl;  //prints 10

    q.pop(); // {10,4,3,2}

    cout<<q.front();   //prints 2

    // size swap empty same as stack

}
int main(){
explainQueue();
  return 0;
}