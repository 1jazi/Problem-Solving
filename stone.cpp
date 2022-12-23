#include<bits/stdc++.h>
using namespace std;
int main(){

 int num,count=0;
 string stone;
 cin>>num;
 
  cin>>stone;
  for(int i = 1; i<num; i++){
   
   if(stone[i]==stone[i-1]){
    count++;
   }
  
 
 }
 cout<<count<<endl;

return 0;
}
