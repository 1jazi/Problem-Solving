#include<iostream>
#include<algorithm>
using namespace std;
int main(){

 int n,m,price[1000],total=0;
 cin>>n>>m;
  for(int i = 0;i<n;i++){
    cin>>price[i];
  }
  
  sort(price,price+n);
  for(int i = 0;i<m;i++){
  
  if(price[i]>=0){break;}
   total += price[i];
  }
  
 cout<<total*-1<<endl;

return 0;
}
