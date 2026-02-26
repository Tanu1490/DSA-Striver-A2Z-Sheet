#include<bits/stdc++.h>
using namespace std;

// pass by value
// void tex(string s){
//     cout<<s<<endl;;
//     s[0]='r';
//     cout<<s<<endl;
// }

// int main(){
//     string s="taj";
//     tex(s);
//     cout<<s<<endl;
//     return 0;
// }

//pass by reference
// when i don't want to send copy insted
// make changes to original one

void tex(string &s){ //just use & which refer to address of 
    cout<<s<<endl;   // original copy and makes changes to it
    s[0]='r';
    cout<<s<<endl;
}

int main(){
    string s="taj";
    tex(s);
    cout<<s<<endl;
    return 0;
}
