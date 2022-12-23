#include<iostream>
#include<string>
using namespace std; 

int main(){

 int numOfTest;

 cin>>numOfTest;
 
  while(numOfTest--){
  string s;
  cin>>s;
  int count =0;
  int mid = s.length()/2;
  if(s.length()==1){
    cout<<"NO"<<endl;
  }
  else if(s.length()%2==0){
    for(int i =0 ; i< mid;i++){
      if(s.at(i)==s.at(i+mid)){
       count++;
      }
    
    }
    if(count == mid){
     cout<<"YES"<<endl;
    }else{cout<<"NO"<<endl;}
  
  }else{cout<<"NO"<<endl;}
 }
 
 


return 0;
}
