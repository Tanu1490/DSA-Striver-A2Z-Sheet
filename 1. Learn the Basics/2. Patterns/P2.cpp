//Babbars patterns

#include<bits/stdc++.h>
using namespace std;

void print1(int n){
 for(int i=1;i<=n;i++){
    for(int j=1;j<=n;j++){
    cout<<j<<" ";
 }
 cout<<endl;
 }
}

void print2(int n){
 for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
    cout<<n-j<<" ";
 }
 cout<<endl;
 }
}

void print3(int n){
    int count=1;
 for(int i=1;i<=n;i++){
    for(int j=1;j<=n;j++){
    cout<<count<<" ";
    count++;
 }
 cout<<endl;
 }
}

void print4(int n){
  int  count=9;
 for(int i=1;i<=n;i++){
    for(int j=0;j<n;j++){
    cout<<count<<" ";
    count--;
 }
 cout<<endl;
 }
}

void print5(int n){
    int count = 4*n;
 for(int i=1;i<=n;i++){
    for(int j=1;j<=n;j++){
    cout<<count<<" ";
    count--;
 }
 cout<<endl;
 }
}

void print6(int n){
 for(int i=1;i<=n;i++){
    for(int j=1;j<=i;j++){
    cout<<"* ";
 }
 cout<<endl;
 }
}

void print7(int n){
 for(int i=1;i<=n;i++){
    for(int j=1;j<=i;j++){
    cout<<i<<" ";
 }
 cout<<endl;
 }
}

void print8(int n){
 int count=1;
 for(int i=1;i<=n;i++){
    for(int j=1;j<=i;j++){
    cout<<count<<" ";
    count++;
 }
 cout<<endl;
 }
}

void print9(int n){
 for(int i=1;i<=n;i++){
    for(int j=1;j<=i;j++){
    cout<<i+j-1<<" ";
 }
 
 cout<<endl;
 }
}

void print10(int n){
 for(int i=1;i<=n;i++){
    for(int j=1;j<=i;j++){
    cout<<i-j+1<<" ";
 }
 cout<<endl;
 }
}

void print11(int n){
char ch='A';
 for(int i=1;i<=n;i++){
    for(int j=1;j<=n;j++){
    cout<<ch<<" ";
 }
 ch++;
 cout<<endl;
 }
}

void print12(int n){

 for(int i=1;i<=n;i++){
    char ch='A';
    for(int j=1;j<=n;j++){
    cout<<ch<<" ";
    ch++;
 }
 
 cout<<endl;
 }
}

void print13(int n){
char ch='A';
 for(int i=1;i<=n;i++){
    for(int j=1;j<=n;j++){
    cout<<ch<<" ";
    ch++;
 }
 
 cout<<endl;
 }
}

void print14(int n){
 for(int i=1;i<=n;i++){
    char ch='A';
    for(int j=1;j<=n;j++){
    cout<<char(ch+i+j-2)<<" ";
 }
 cout<<endl;
 }
}

void print15(int n){
 char ch='A';
 for(int i=1;i<=n;i++){
    for(int j=1;j<=i;j++){
    cout<<ch<<" ";  
 }
 ch++;
 cout<<endl;
 }
}

void print16(int n){
 char ch='A';
 for(int i=1;i<=n;i++){
    for(int j=1;j<=i;j++){
    cout<<char(ch+i+j-2)<<" ";   
 }
 cout<<endl;
 }
}

void print17(int n){
 
 for(int i=1;i<=n;i++){
    char ch='A'+ n-i;
    for(int j=1;j<=i;j++){
    cout<<ch<<" "; 
    ch++ ;
 }
 cout<<endl;
 }
}

void print18(int n){
 
 for(int i=1;i<=n;i++){
    for(int j=1;j<=n-i;j++){
    cout<<" "; 
   }
   for(int j=1;j<=i;j++){
    cout<<"*";
   }
 cout<<endl;
 }
}

void print19(int n){
 
 for(int i=1;i<=n;i++){
    for(int j=1;j<=;j++){
    cout<<"*";
   }
    for(int j=1;j<=n-i;j++){
    cout<<" "; 
   }
   
 cout<<endl;
 }
}



int main(){
  int n;
  cout<<"Enter n: ";
  cin>>n;
  print19(n);
}
