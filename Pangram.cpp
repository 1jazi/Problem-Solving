#include<iostream>
using namespace std;
void letter(char s[], int size);
int main(){
 
 
 int charSize;
 cin>>charSize;
 if(charSize>=1&&charSize<=100){
 char letterr[charSize];
 int size = sizeof(letterr)/sizeof(char);
 for(int i = 0 ;i<size;i++){
   cin>>letterr[i];
 }
  
  letter(letterr,size);

return 0;
}
}
void letter(char s[], int size){
   s[size] = tolower(s[size]);
   string st = s;
  
   bool allLetter = true; 
   for(char ch = 'a';ch<='z';ch++){
    if(!st.find(ch)){
      allLetter = false;
      break;
    }
   }
    if(allLetter){
    cout<<"YES"<<endl;
   }else{
    cout<<"NO"<<endl;
   }
}
