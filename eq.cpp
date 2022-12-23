#include<iostream>
using namespace std;

int main(){

 int n,m,count=0;
  cin>>n;
  cin>>m;
  
 for(int i = 0;i<100;i++){
  // int a = i;
   int b = n-a;
    n = (a*a) + b;
    m = a + (b*b);
    
    if(n==m){
     count++; 
       break;
    }
  }
  
  cout<<n<<" "<<m<<endl;
  cout<<count<<endl;
  
 

return 0;
}
