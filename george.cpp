#include<iostream>
#include<cmath>
using namespace std;
int main(){
 int num,room1,room2,count=0;
 cin>>num;
 
 while(num--){
   cin>>room1>>room2;
   if(room1!=room2&&abs(room1-room2)>=2){
   count++;
   }
 }
 cout<<count<<endl;
return 0;
}
