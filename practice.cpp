#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.emplace_back(3);
    v.emplace_back(4);
    v.emplace_back(5);

    vector<pair<int,int>> v1;
    v1.push_back({2,3});
    v1.emplace_back(45,67);

    vector<int> v2(5,1900);
    vector<int> v3(4);

    vector<int> v4(v2);
    cout<<v[0]<<" "<<v[1]<<" "<<v[2]<<endl;
    
    for(auto x : v1){
        cout<<x.first<<" "<<x.second<<endl;
    }

    for(auto x : v2){
        cout<<x<<endl;
    }

    for(auto x : v3){
        cout<<x<<endl;
    }

    for(auto x : v4){
        cout<<x<<endl;
    } 

    vector<int> ::iterator it = v.begin();
    cout<<*it<<endl;
    it++;
    cout<<*it<<endl;

    vector<int> ::iterator iter = v.end();
    iter--;
    cout<<*iter<<endl;
    iter--;
    cout<<*iter<<endl;
    iter--;
    cout<<*iter<<endl;

    cout<<v.back()<<endl;

    v.erase(v.begin()+2 , v.begin()+4);
    for(auto x : v){
        cout<<x<<endl;
    }
    
    v.insert(v.begin()+2,4,34);
     for(auto x : v){
        cout<<x<<endl;
    }

    v2.insert(v2.begin()+1 , v.begin() , v.end());
      for(auto x : v2){
        cout<<x<<endl;
    }
  
    cout<<v2.size()<<endl;
    
    v2.pop_back();
      for(auto x : v2){
        cout<<x<<endl;
    }
    return 0;
}