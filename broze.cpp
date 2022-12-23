#include <iostream>
#include<string>
using namespace std;

int main() {
 string str,s2;
 cin>>str;

for(int i=0;i<str.length();i++)
{
	if(str[i]=='.'){
         s2+="0";
	}
	else if(str[i]=='-'&&str[i+1]=='.'){
         s2+="1";
         i++;	
	}
	else if(str[i]=='-'&&str[i+1]=='-'){
       	 s2+="2";
	 i++;
	}
	
} 
      cout<<s2;
 
 
 
 	return 0;
}
