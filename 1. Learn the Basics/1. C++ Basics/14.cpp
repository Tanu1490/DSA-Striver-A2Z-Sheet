#include<bits/stdc++.h>
using namespace std;

void fu(string *s){
    (*s)[0]='t';
    cout<<*s<<endl;
}
int main(){
   string s = "raj" ;
   fu(&s);
   cout<<s<<endl;

   
}

   