#include<bits/stdc++.h>
using namespace std;
void compare(string s);
int main(){
 string s;
 int numOfTest,i,count;
 cin>>numOfTest;
 
 while(numOfTest--){
  int length;
  cin>>length;
 
   while(s.length()!=length){
    cin>>s; 
    sort(s.begin(),s.end());  
   }
     for(i=1;i<s.length();i++){
     if(s[i]!=s[i-1]){
      count++;
     }
    }
    if(s.length()==1){
    // count == 2;
    }
    compare(s);
 //cout<<s<< " "<< s.length()<<" -> "<<count<<endl;
 }


return 0;
}
void compare(string s){
int count=0;
  for(int i = 0; i <s.length(); i++) { 
      count = 1; 

        for(int j = i+1; j < s.length(); j++) {
          if(s[i] == s[j] && s[i] != ' ') { 
          count++; 
   
          s[j] = '0'; 
         } 
       }
        if(count > 1 && s[i] != '0') {
          count++;
         cout<<s[i]<<endl;  
        }
}
}
