#include<bits/stdc++.h>
using namespace std;

//void with parameterised
void printname(string name){
    cout<<"Your name is : "<<name<<endl;

}

int main(){
    string name;
    cout<<"Enter your name: ";
    getline(cin,name);
    printname(name);
    return 0;
}