#include <iostream>
#include<string>
using namespace std;

string solve(string s1 ,char c );
int main() {

 string s1;
 char c;
 cin>>c;
 cin>>s1;
 cout<<solve(s1,c);


return 0;
}
string solve(string s1 ,char c ){
	string s="qwertyuiopasdfghjkl;zxcvbnm,./";
	string answer;
       
        for(int i=0;i<s.length();i++){
	  int index=s.find(s1[i]);
	   if(c=='R'){
		answer+=s[index-1];
	   }
           else{
		answer+=s[index+1];
	   }
	
        }
return answer;	
}
