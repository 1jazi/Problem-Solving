#include<iostream>
using namespace std;

int main(){

 string first, second;
 int i;
 
 cin>>first;
 cin>>second;
 //int length = to_string(first).length();
 
 for(i = 0; i<first.length(); i++){
  if(first[i]==second[i]){
   cout<<0;
  }
  else{cout<<1;}
 }

return 0;
}
