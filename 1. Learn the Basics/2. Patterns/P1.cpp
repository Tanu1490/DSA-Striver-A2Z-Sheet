#include<bits/stdc++.h>
using namespace std;

// void print(int n){
//  for(int i=0;i<n;i++){
//         for( int j=0;j<n;j++){
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
    
// }
// void print(int n){
//  for(int i=0;i<n;i++){
//         for( int j=0;j<i+1;j++){  // can also use j<=i
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
    
// }
// void print(int n){
//  for(int i=1;i<=n;i++){
//         for( int j=1;j<=i;j++){  // can also use j<i+1
//             cout<<j<<" ";
//         }
//         cout<<endl;
//     }
    
// }
// void print(int n){
//  for(int i=0;i<n;i++){
//         for( int j=1;j<=i+1;j++){ 
//             cout<<j<<" ";
//         }
//         cout<<endl;
//     }
    
// }
// void print(int n){
//  for(int i=1;i<=n;i++){
//         for( int j=1;j<=i;j++){ 
//             cout<<i<<" ";
//         };
//         cout<<'\n';
//     }
    
// }

// void print(int n){
//  for(int i=1;i<=n;i++){
//         for( int j=1;j<=n-i+1;j++){ 
//             cout<<"* ";
//         };
//         cout<<'\n';
//     }
    
// }

// void print(int n){
//  for(int i=1;i<=n;i++){
//         for( int j=1;j<=n-i+1;j++){ 
//             cout<<j<<" ";
            
//         }
//         cout<<'\n';
        

//     }
    
// }
// void print(int n){
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<n-i+1;j++){
//             cout<<" ";
//         }
//         for(int j=1;j<=2*i-1;j++){   
//             cout<<"*";
//         }
//         for(int j=1;j<n-i+1;j++){
//             cout<<" ";
//         }
        
//         cout<<'\n';
//     }
// }
// void print(int n){
//     for(int i=0;i<n;i++){
//         for(int j=0;j<i;j++){
//             cout<<" ";
//         };
//         for(int j=0;j<2*(4-i)+1;j++){
//             cout<<"*";
//         };
//         for(int j=0;j<i;j++){
//             cout<<" ";
//         }
//         cout<<endl;
//     }
// }
// void print(int n){
//   for(int i=1;i<=2*n-1;i++){
//     int star=i;
//     if(i>n) star=2*n-i;
//         for(int j=1;j<=star;j++){
//             cout<<"*";
//           }
//           cout<<endl;

//         }
//   }
// void print(int n){
//     for(int i=1;i<=n;i++){
//         int start;
//         if(i%2!=0) start=1;
//         else start=0;
//         for(int j=1;j<=i;j++){
//             cout<<start<<" ";
//             start=1-start;
//         };
//         cout<<endl;
//     }
// }
// void print(int n){
//  for(int i=1;i<=n;i++){
//     for(int j=1;j<=i;j++){
//         cout<<j;
//     };
//     for(int j=1;j<=2*(n-i);j++){
//         cout<<" ";
//     };
//      for(int j=i;j>=1;j--){
//         cout<<j;
//     };

//     cout<<endl;
//  }
//  }
// void print(int n){
//     int num=1;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=i;j++){
//             cout<<num<<" ";
//            num++; 
//         }
//         cout<<endl; 
//     }
// }
// void print(int n){
//     for(int i=1;i<=n;i++){
//         char r = 65; //in ascii A=65
//         for(int j=1;j<=i;j++){
//             cout<<r<<" ";
//             r++;
//         }
//         cout<<endl;
//     }
// }
// void print(int n){
//     for(int i=0;i<n;i++){
//         char r = 'A'; 
//         for(int j=1;j<=n-i;j++){
//             cout<<r<<" ";
//             r++;
//         }
//         cout<<endl;
//     }
// }
// void print(int n){
//    char r='A'; 
//     for(int i=1;i<=n;i++){  
//         for(int j=1;j<=i;j++){
//             cout<<r<<" ";   
//         }
//         r++;
//         cout<<endl;
//     }
// }
// void print(int n){
//   for(int i=0;i<n;i++){
          
//           // for printing the spaces.
//           for(int j=0;j<n-i-1;j++){
//               cout<<" ";
//           }
          
//           // for printing the characters.
//           char ch = 'A';
//           int breakpoint = (2*i+1)/2;   // or (2*i+1) + 1 / 2
//           for(int j=1;j<=2*i+1;j++){
              
//               cout<<ch;
//               if(j <= breakpoint) ch++;    //then j<breakpoint
//               else ch--;
//           }
          
//           // for printing the spaces again after characters.
//           for(int j=0;j<n-i-1;j++){
//               cout<<" ";
//           }
          
//           // As soon as the letters for each iteration are printed, we move to the
//           // next row and give a line break otherwise all letters
//           // would get printed in 1 line.
//           cout<<endl;
          
//       }
  
// }
// void print(int n){
    
//     for(int i=0;i<n;i++){
       
//         for( char ch='E'-i;ch<='E';ch++){
//             cout<<ch<<" ";
           
//         }
//         cout<<endl;
//     }
// }

// void print(int n){
//     for(int i=0;i<n;i++){
        
//         for(int j=1;j<=n-i;j++){
//             cout<<"*";
//         }
//         for(int j=1;j<=2*i;j++){
//             cout<<" ";
//         }
//         for(int j=1;j<=n-i;j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
//     for(int i=0;i<n;i++){
//          for(int j=0;j<=i;j++){
//             cout<<"*";
//         }
//         for(int j=0;j<8-2*i;j++){
//             cout<<" ";
//         }
//         for(int j=0;j<=i;j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
// }
// void print(int n){
//     for(int i=0;i<n;i++){
//          for(int j=0;j<=i;j++){
//             cout<<"*";
//         }
//         for(int j=0;j<8-2*i;j++){
//             cout<<" ";
//         }
//         for(int j=0;j<=i;j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
//     for(int i=1;i<=n;i++){
        
//         for(int j=1;j<=n-i;j++){
//             cout<<"*";
//         }
//         for(int j=1;j<=2*i;j++){
//             cout<<" ";
//         }
//         for(int j=1;j<=n-i;j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
// }

// void print(int n){
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             if(i==0 || j==0||i==n-1||j==n-1){
//                 cout<<"*";
//             }
//             else cout<<" ";
//         }cout<<endl;
//     }

// }
// void print(int n){
//     for(int i=0;i<2*n-1;i++){
//         for(int j=0;j<2*n-1;j++){
//             int top=i;
//             int left=j;
//             int right=(2*n-2)-j;
//             int down=(2*n-2)-i;
//             cout<<(n-min(min(top,down),min(left,right)));        
//             }
//              cout<<endl;
//     }
   
// }




// // concept of test case 
// //this happens at backend of online compilers they test on multiple cases
// int main(){
//     int t;
//     cout<<"enter no. of test case:";
//     cin>>t;
//     for(int i=0;i<t;i++){
//         int n;
//         cin>>n;
//         //print9(n);
//         //print10(n);
//         print23(n);
//     }
    

   
// }

// #include<iostream> 
// using namespace std;

// void print(int n){
  
//   for (int i = 1; i <= n; i++){
//     for(int j=1;j<=i;j++){
//         cout<<"* ";
//     }
//    cout<<endl;
// }
// }
 
int main(){
  int t;
  cin>>t;
  for(int i=0; i<t; i++){
    int n;
    cin>>n;
    print(n);
  };
  return 0;
}