#include<iostream>
using namespace std;
int main(){

 int n,k,array[100],count=0;
   cin>>n;
   cin>>k;
  for(int i = 0;i<n;i++){
   cin>>array[i];
   }
   for(int i = 0;i<n;i++){
   if(array[i]>=array[k-1]&&array[i]>0){
    count++;
   }
   }
   
   cout<<count<<endl;
 

return 0;
}
