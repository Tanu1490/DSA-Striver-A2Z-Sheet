#include<bits/stdc++.h>
using namespace std;

int main(){
    int marks;
    cout<<"Enter your marks:"<<endl;
    cin>>marks;

    // if(marks<25){
    //     cout<<"Your grade is: F";
    // }
    // else if(marks<=44){
    //     cout<<"Your grade is: E";
    // }
    // else if( marks<=49){
    //     cout<<"Your grade is: D";
    // }
    // else if(marks<=59){
    //     cout<<"Your grade is: C";
    // }
    // else if(marks<=79){
    //     cout<<"Your grade is: B";
    // }
    // else{
    //     cout<<"Your grade is: A";
    // }


    // -----------other way-------------------------

    char grade;

    if (marks < 25) {
        grade = 'F';
    } else if (marks <= 44) {
        grade = 'E';
    } else if (marks <= 49) {
        grade = 'D';
    } else if (marks <= 59) {
        grade = 'C';
    } else if (marks <= 69) {
        grade = 'B';
    } else if (marks >= 70) {
        grade = 'A';
    } else {
        grade = 'X'; // Use 'X' to indicate invalid marks
    }

    cout << "Grade: " << grade << endl;

    
    return 0;
}
