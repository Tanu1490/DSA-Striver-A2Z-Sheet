#include<bits/stdc++.h>
using namespace std;

int myCount = 0;
void f(){
    if(myCount==6)
     return;
    cout<<myCount;
    myCount++;
    f();
}
int main(){
  f();
  return 0;
}