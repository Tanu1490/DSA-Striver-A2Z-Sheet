#include<bits/stdc++.h>
using namespace std;

int sum(int num1, int num2){  //can also use void
    return num1+num2;         //when here we use int num3=num1+num2;
}                               //cout<<num3;
int main(){
    int num1,num2;
    cout<<"enter 2 numbers:"<<endl;
    cin>>num1>>num2;
    int res=sum(num1, num2);         //then only write sum(num1,num2)
    cout<<res;                        // remove this
    return 0;
}

