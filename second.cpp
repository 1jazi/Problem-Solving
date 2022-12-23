#include<bits/stdc++.h>
#define long long int
using namespace std;
int32_t main(){
  map<int,int> m;
  m.insert({1,2});
  m.insert({2,4});
  for(auto i:m){
      cout<<"key - "<<i.first<<" "<<" Value - "<<i.second<<endl;
  }
}
