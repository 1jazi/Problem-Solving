#include <iostream>
using namespace std;
int main(){
 int num;
 cin>>num;

 string array[num];
 for(int i = 0;i<num;i++){
   cin>>array[i];
   tolower(array[i]);
   if(array[i]=="y"){
    cout<<"YES"<<endl;
   }else{
    cout<<"NO"<<endl;
   }
 }

   
    
  

return 0;
}
