#include<bits/stdc++.h>
using namespace std;
int main(){

  int n;
  cin>>n;
  int array[n];
  
  for(int i = 0;i<n;i++){
     cin>>array[n];
   }
  sort(array,array+n);
  reverse(array,array+n);
  map<int,int>m;
  for(int i =0;i<n;i++){
   m.insert(pair<int,int>(i+1,n-1));
  }
  for(auto &i : m){
  cout<<i.first<<" "<<i.second<<endl;
  }
  

	return 0;
}
