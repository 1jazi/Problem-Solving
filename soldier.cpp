#include<iostream>
using namespace std;
int main(){

 int k, n, w;
 cin>>k;
 cin>>n;
 cin>>w;
 int storeK=0;
 
 for(int i=1;i<=w;i++ ){
   storeK += k*i;
  
 }
 if(storeK>n){
  
  cout<<storeK-n<<endl;
 }
 else {
  cout<<0<<endl;
 }

return 0;
}
