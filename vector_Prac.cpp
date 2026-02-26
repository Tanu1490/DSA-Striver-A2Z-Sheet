#include <bits/stdc++.h>
using namespace std;

void print()
{
  // pair<int, int> p(1, 7);
  // pair<string, float> grocery = {"Tomato", 46.90};
  // cout << p.first << " " << p.second << endl;
  // cout << grocery.first << " " << grocery.second << endl;
  // pair<int, pair<int, int>> p1 = {3, {4, 5}};
  // cout << p1.first << " " << p1.second.first << " " << p1.second.second << endl;

  // pair<int, int> p2 = make_pair(8, 9);
  // cout << p2.first << " " << p2.second << endl;

  // p2.second = 10;
  // cout << p2.first << " " << p2.second << endl;

  // pair<int, int> x(1, 2);
  // pair<int, int> y(1, 8);
  // pair<int, int> z(6, 7);

  // cout << boolalpha;
  // cout << "x==y: " << (x == y) << endl;
  // cout << "x!=y: " << (x != y) << endl;
  // cout << "z>=y: " << (z >= y) << endl;
  // cout << "x<=y: " << (x <= y) << endl;
  // cout << "x>z: " << (x > z) << endl;
  // cout << "z<y: " << (z < y) << endl;

  // pair<int,int> d(8,10);
  // int a,b;
  // tie(a,b) = d;
  // cout<<"a: "<<a<<" "<<"b: "<<b<<endl;

  // vector<int> v;
  // v.push_back(23);
  // v.emplace_back(56);
  // v.emplace_back(45);

  // cout << v[0] << " " << v[1] << " " << v[2] << endl;

  // vector<pair<int, string>> v1 = {{5, "Oranges"}};
  // v1.emplace_back(3, "Peaches");
  // for (auto x : v1)
  // {
  //   cout << x.first << " " << x.second << endl;
  // }

  // vector<int> v2(6, 40);
  // for (auto x : v2)
  // {
  //   cout << x << " ";
  // }
  // cout << endl;

  // vector<pair<int, string>> v3(v1);
  // for (auto x : v3)
  // {
  //   cout << x.first << " " << x.second << endl;
  // }

  // vector<int> v4;
  // v4.push_back(1);
  // v4.emplace_back(2);
  // v4.emplace_back(3);
  // v4.emplace_back(4);
  // v4.emplace_back(5);
  // v4.emplace_back(6);
  // v4.emplace_back(7);
  // v4.emplace_back(8);
  // v4.emplace_back(9);

  // cout<<v4[1]<<" "<<v4.at(3)<<endl;

  // vector<int>::iterator it ;
  // for(it= v4.begin();it!=v4.end();it++){
  //   cout<<*(it)<<" ";
  // }
  // cout<<endl;

  // vector<int>::reverse_iterator rit;
  // for(rit = v4.rend()-1; rit != v4.rbegin()-1; rit--){
  //   cout << *rit << " ";
  // }
  // cout << endl;

  // vector<int>::reverse_iterator ritt;
  // for(ritt = v4.rbegin(); ritt != v4.rend(); ritt++){
  //   cout << *ritt << " ";
  // }
  // cout << endl;

  // vector<int>::reverse_iterator t;
  // for(auto t = v4.rbegin(); t != v4.rend(); t++){
  //   cout << *t << " ";
  // }
  // cout << endl;

  // cout<<"Size of vector v4: "<<v4.size()<<endl;

  // v4.erase(v4.begin()+6);
  // for(auto x: v4){
  //   cout<<x<<" ";
  // }
  // cout<<endl;

  // v4.erase(v4.begin()+2,v4.begin()+4);
  // for(auto x: v4){
  //   cout<<x<<" ";
  // }
  // cout<<endl;

  // // vector<int> s(3,60);
  // vector<int> s;
  // s.emplace_back(39);
  // s.emplace_back(78);
  // s.emplace_back(85);
  // v4.insert(v4.begin()+2,s.begin(),s.end());
  // v4.insert(v4.end(),2,44);
  // for(auto x: v4){
  //   cout<<x<<" ";
  // }
  // cout<<endl;

  // v4.pop_back();
  // for(auto x: v4){
  //   cout<<x<<" ";
  // }
  // cout<<endl;

  // s.swap(v4);
  // for(auto x: v4){
  //   cout<<x<<" ";
  // }
  // cout<<endl;

  // v4.clear();
  // if(v4.empty()){
  //   cout<<"v4 is empty";
  // }

  // deque<int> d = {1,2,3,45,56,643,53};
  // d.push_front(23);
  // d.emplace_back(38);
  // for(auto x : d){
  //   cout<<x<<" ";
  // }
  // cout<<endl;
  
  // d.pop_back();
  // d.pop_front();
  // deque<int> :: iterator id;
  // for(id=d.begin(); id!=d.end(); id++){
  // cout<<*id<<" ";
  // }
  // cout<<endl;

  // cout<<d.at(3)<<" "<<d[3]<<" " <<d.size()<<endl;


  // stack<int> s;
  // s.push(10);
  // s.push(20);
  // s.push(30);
  // s.push(40);
  // s.push(50);

  // if(!s.empty()){
  //   cout<<"not empty"<<endl;
  // }

  // cout<<s.size()<<endl;
  // cout<<s.top()<<endl;

  // s.pop();
  // // // Print stack elements by popping them (since stack is not iterable)
  // // while (!s.empty()) {
  // //   cout << s.top() << " ";
  // //   s.pop();
  // // }

  // stack<int> s1;
  // s1.push(101);
  // s1.push(201);
  // s1.push(301);
  // s1.push(401);
  // s1.push(501);

  // s1.swap(s);

  // while (!s.empty()) {
  //   cout << s.top() << " ";
  //   s.pop();
  // }


//   queue<int> q;
//   q.push(10);
//   q.push(20);
//   q.push(30);
//   q.push(40);
//   q.push(50);

//   while(!q.empty()){
//     cout<<q.front()<<" ";
//     q.pop();
//   }

//   cout<<"Size of Queue : "<<q.size()<<endl;

// }

// priority_queue<int> p;  //priority_queue<int,vector<int>,less<int>> for max heap
// p.push(34);
// p.push(14);
// p.push(56);
// p.push(4);
// p.push(1);
// p.push(67);

// cout<<p.top()<<endl;
//   while(!p.empty()){
//     cout<<p.top()<<" ";
//     p.pop();
//   }
//   cout<<endl;

// priority_queue<int,vector<int>,greater<int>> pq;
// pq.push(74);
// pq.push(34);
// pq.push(80);
// pq.push(40);
// pq.push(10);
// pq.push(67);

// cout<<pq.top()<<endl;
//   while(!pq.empty()){
//     cout<<pq.top()<<" ";
//     pq.pop();
//   }

// for swapping both pq comparator condition must be same 


// set<int> s;
// s.insert(23);
// s.insert(74);
// s.insert(34);
// s.insert(80);
// s.insert(40);
// s.insert(80);
// s.insert(10);
// s.insert(67);

// for(auto x: s){
//   cout<<x<<" ";
// }
// cout<<endl;

// auto it = s.find(80);
// if(it!=s.end()){
//   cout<<"element found"<<endl;
// }

// // s.erase(next(s.begin(), 2),next(s.begin(), 5));
// // for(auto x: s){
// //   cout<<x<<" ";
// // }
// // cout<<endl;

//      //or 

// // auto x = s.find(34);
// // auto y = s.find(67);
// // s.erase(x,y);
// // for(auto x: s){
// //   cout<<x<<" ";
// // }
// // cout<<endl;

//      //or

// s.erase(s.find(34),next(s.find(34),3));
// for(auto x: s){
//   cout<<x<<" ";
// }
// cout<<endl;

// cout<<s.count(67)<<endl;

// auto lb = s.lower_bound(67);
// auto ub = s.upper_bound(74);
// if(lb != s.end())
//   cout << *lb << " ";
// else
//   cout << "No lower bound found ";
// if(ub != s.end())
//   cout << *ub;
// else
//   cout << "No upper bound found";

// multiset<int> ms;
// ms.insert(23);
// ms.insert(80);
// ms.insert(80);
// ms.insert(80);
// ms.insert(40);
// ms.insert(80);


// ms.erase(ms.find(80),next(ms.find(80),3));

// for(auto it:ms){
//   cout<<it<<" ";
// }
// cout<<endl;

// map<int,string, greater<int>> m;
// m.emplace(1,"Kevin");
// m.emplace(3,"Kris");
// m.emplace(4,"naomi");
// m.emplace(6,"Levi");
// m.emplace(2,"Umi");
// m.emplace(7,"Luke");

// m[6] = "Kris";
// for(auto it : m){
//   cout<<"key: "<<it.first<<" Value: "<<it.second;
//   cout<<endl;
// }

// map<int,pair<int,int>> m1;
// m1.emplace(1, make_pair(2,3));
// m1.emplace(3, make_pair(3,4));
// m1.emplace(4, make_pair(7,2));
// m1.emplace(6, make_pair(0,5));
// m1.emplace(2, make_pair(8,6));

// for(auto it = m1.begin(); it!=m1.end(); it++){
//   cout<<"key: "<<it->first<<" Value: "<<it->second.first<<" "<<it->second.second<<endl;
// }

// // or

// for(auto it:m1){
//     cout<<"key: "<<it.first<<" Value: "<<it.second.first<<" "<<it.second.second<<endl;
// }

// cout << m1[4].first << " " << m1[4].second << endl;


// multimap<int,pair<int,int>> mm;
// mm.emplace(1, make_pair(2,3));
// mm.emplace(3, make_pair(3,4));
// mm.emplace(6, make_pair(7,2));
// mm.emplace(6, make_pair(0,5));
// mm.emplace(1, make_pair(8,6));

// for(auto it : mm){
//   cout<<"key: "<<it.first<<" Value: "<<it.second.first<<" "<<it.second.second;
//   cout<<endl;
// }
// cout<<mm.count(1)<<endl;   //gives no of count of keys while in map only 0 or 1
// mm.erase(3);

// auto it = mm.equal_range(6);   //Returns a pair<iterator, iterator>: 2 itr one to lower bound and one to upper bound
// for(auto itr = it.first; itr!= it.second; itr++ ){
//   cout<<itr->first<<" "<<itr->second.first<<" "<<itr->second.second<<endl;
// }

// int a[] = {1,35,67,82,8,7,90};
// sort(a, a + 7, greater<int>());
// for(auto it:a){
//   cout<<it<<" ";
// }

// vector<int> v = {1,35,67,82,8,7,90};

// sort(v.begin()+2,v.end()-1,greater<int>());
// for(auto it:v){
//   cout<<it<<" ";
// }

int n,cnt=0;
cin>>n;

while(n>0){
  int last_digit = n%10;
  cnt+=1;
  n=n/10;
}

cout<<cnt;

}
int main()
{
  print();
  return 0;
}