#include<iostream>
using namespace std;
int n,m,ans;
int main(){

 cin>>n,m;
 if(n>=m){
  ans=n;
 }else{
  ans=m; 
 }
 if(ans%2==0){
  cout<<"Malvika"<<endl;
 }else{
  cout<<"Akshat"<<endl;
 }

return 0;
}
