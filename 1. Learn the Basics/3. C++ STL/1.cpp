#include<bits/stdc++.h>    //this includes all the libraries so that user don't have to add libraries individually
using namespace std;

//Pairs

void Pairs(){
    pair<int,int> p1 = {1,3};       //store 2 var.
    cout<<p1.first<<" "<<p1.second<<endl;   //access

    pair<int, pair<int,int>> p2 = {1,{3,4}};
    cout<<p2.first<<" "<<p2.second.second<<" "<<p2.second.first<<endl;

    pair<int,int> arr[]={{1,2}, {3,5}, {6,8}};
    cout<<arr[2].first;

    
}

//Vectors
//Vectors are dynamic in nature you can change its size whenever u want
//like  arrays are constant once defining its size you can't add more elements to it 
//there comes vectors
//vector is container which stores data in similar fashion like array does

void Vectors(){

    vector<int> v1;  //creates empty container { }
    
    v1.push_back(1);   //push 1 in container {1}
    v1.emplace_back(2);  //similar like push back but faster 
    v1.emplace_back(5);   //increase container size and add 2 at back 
    v1.emplace_back(6);     // {1,2,5,6}
    
    vector<pair<int,int>> v2;    //vector of pair datatype
    v2.push_back({2,3});         // need to use ( { } )
    v2.emplace_back(4,5);        // only () it automatically know it is pair


    vector<int> v3(5,100);       //containers of size 5 already defined with 5 intances of 100 {100,100,100,100,100}

    vector<int> v4(5);    //don't want intances only declare size ,will give container with 0 or garbage value 
                          //depending on the compiler
                        // although size is defined it can be changed using push_back or emplace_back
    
    vector<int> v5(5,20);
    vector<int> v6(v5);    //copied v5 in v6 it will give copy of v5

    //to access vectors 1) just like array 2) iterators

    cout<<v1[1]<<" "<<v1.at(0)<<endl;   //.at no usually used

    //iterators
    vector<int> v(1,2,3,4,4,5,5);
    vector<int>::iterator it= v.begin();
     
    it++;
    cout<<*(it)<<" ";

    it = it+2;
    cout<<*(it)<<" ";

    vector<int>::iterator it = v.end();
    vector<int>::reverse_iterator it = v.rend();
    vector<int>::reverse_iterator it = v.rbegin();
    
    cout<<v.back()<<" ";

    for(vector<int>::iterator it=v.begin(); it != v.end(); it++){
        cout<<*(it)<<" ";
    }

    for(auto it=v.begin(); it != v.end(); it++){
        cout<<*(it)<<" ";
    }

    //for each loop
    for(auto it : v){
        cout<<it<<" ";
    }
    
    //deletion
    //{1,2,3,4,4,5,5}
    v.erase(v.begin()+1);   //reshuffle {1,3,4,4,5,5}
     
}











int main(){
    
    Vectors();
    return 0;
}



