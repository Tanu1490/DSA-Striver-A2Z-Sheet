#include<bits/stdc++.h>
using namespace std;

void dosomething(int num){
    cout<<num<<endl;
    num+=10;
    cout<<num<<endl;
    num+=10;
    cout<<num<<endl;//final answer is 40

}

int main(){
    int num=20;
    dosomething(num);
    cout<<num<<endl;  // program will come here but num will be 20  
    return 0;  //because only copy goes to fun. and it performs oper. on that     
}                   //original value does not change 
     //THIS IS PASS BY VALUE