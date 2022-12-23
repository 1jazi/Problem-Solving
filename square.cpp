#include<iostream>
using namespace std;
int compare(string str);
int main(){

 int numOfTest;
 cin>>numOfTest;
 int j,i;
    string str;
     string firstString[100];
     string secondString[100];
    while(numOfTest--){
     cin>>str;
    
     int stringLength = str.length();
   
     
     if(stringLength%2==0){
  
     }
     for(i = 0;i<stringLength/2;i++){
       firstString[i] = str[i]; 
       
     for(j = stringLength/2;j<stringLength;j++){
       secondString[j] = str[j]; 
       
     }


     }
     if(firstString[i]==secondString[j]&&stringLength%2==0&&compare(firstString[i])>=0){
         cout<<"YES"<<endl;
        }
        else{
         cout<<"NO"<<endl;
        }
        
    } 
    
 

return 0;
}
int compare(string s){
int count=0;
int total;
  for(int i = 0; i <s.length(); i++) { 
      //count = 1; 

        for(int j = i+1; j < s.length(); j++) {
          if(s[i] == s[j] && s[i] != ' ') { 
          count++; 
   
         // s[j] = '0'; 
         } 
       }
         if(count > 1 && s[i] != '0') {
          count++;
        //cout<<"dublicate --> "<<s[i]<<endl; 
          return count;
          }
          
         else{
           return -1;
         }
   
       }
    // cout<<count<<endl;
    return count;
}

