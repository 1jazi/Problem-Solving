#include<iostream>
#include <array>

using namespace std;
int main(){
 
 int n,d;
  cin>>n;
  cin>>d;
 int array1[n], array2[n];
 
 for(int i = 0 ;i<n;i++){
   cin>>array1[i];
   cin>>array2[i];
   cout << array1[i]<<endl;
   
   cout << array2[i]<<endl;
 }

return 0;
}
