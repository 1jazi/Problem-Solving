#include<iostream>
#include <algorithm>
using namespace std;
void yes(int num);
int main(){
  
  int num;
  
  cin>>num;
  string s;

 for(int i =0 ;i<num;i++){
 
   cin>>s;
   transform(s.begin(),s.end(),s.begin(), ::tolower);
  
  if(s=="yes"||s=="YES"){
   cout << "YES"<<endl;
  }else{
   cout<<"NO"<<endl;
  }
 }
  
 
return 0;
}
void num(int num){


}
