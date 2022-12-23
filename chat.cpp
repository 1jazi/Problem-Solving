#include<iostream>
using namespace std;
int main(){

 string word, originalWord="hello";
 cin>>word;
 int count =0,temp=0;
   for(int i = 0;i<word.length();i++){
      
      if(originalWord[temp]==word[i]){count++;temp++;}      
   }
  
  if(count==5){
   cout<<"YES"<<endl;
  }else{
  cout<<"NO"<<endl;
  
  }
return 0;
}
