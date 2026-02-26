// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int age;
//     cout<<"Enter your age:";
//     cin>>age;

//     if(age<18){
//         cout<<"Not eligible for job";
//     }
//     else if(age<=54){
//         cout<<"Eligible for job";
//     }
//     else if(age<=57){
//         cout<<"eligible for job, but retirement soon.";
//     }
//     else{
//         cout<<"Retirement Time";
//     }

//     return 0;

// }

// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int age;
//     cout<<"Enter your age:";
//     cin>>age;

//     if(age<18){
//         cout<<"Not eligible for job";
//     }
//     /*nested if else for below code we have another way
//       else if(age<=54){
//         cout<<"Eligible for job";
//     }
//     else if(age<=57){
//         cout<<"eligible for job, but retirement soon.";
//     }*/

//     else if (age>=55){
//         cout<<"Eligible for job";
//          if(age<=57){
//             cout<<", but retirement soon.";
//          }
//     }
//     else{
//         cout<<"Retirement Time";
//     }

//     return 0;

// }

#include<iostream>
using namespace std;
int main()
{
    int marks;
    cin>>marks;

    if(marks>=90){
        cout<<"Grade A"<<endl;
    }
     else if(marks>=70){
        cout<<"Grade B"<<endl;
    }
     else if(marks>=50){
        cout<<"Grade C"<<endl;
    }
    else if(marks>=35){
        cout<<"Grade D"<<endl;
    }
    else{
        cout<<"Fail";
    }
  return 0;
}