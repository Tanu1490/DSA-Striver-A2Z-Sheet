#include<bits/stdc++.h>
using namespace std;

// Nth FIBONNACI NUMBER

// int f(int i){
//   if(i<=1) return i;
//   int last = f(i-1);
//   int slast = f(i-2);
//   return last + slast;
// }

// int main(){
//   int n;
//   cout<<"Enter nth number: ";
//   cin>>n;
//   cout<<n<<"th Fibonacci number: "<<f(n);
// }



int main() {
    int n = 5;
    cout << "The Fibonacci Series up to " << n << "th term:" << endl;

    int a = 0, b = 1;

    if (n == 0) {
        cout << a;
    } else {
        cout << a << " " << b << " ";
        for (int i = 2; i <= n; i++) {
            int c = a + b;
            cout << c << " ";
            a = b;
            b = c;
        }
    }
    return 0;
}

