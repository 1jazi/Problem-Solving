#include<iostream>
using namespace std;
char findBigger(char cc[100][100], int n, int m);
int main(){

 int n,m,ans;
 cin>>n;
 cin>>m;
 char c[100][100],max;
 string a[100][100];
 
 
 for (int i = 0; i < n; ++i){   
    bool wasBest = false;
    for(int j = 0; j < m; ++j){
        bool isBest = true;
        for(int k = 0; k < n; ++k)
            if(a[k][j] > a[i][j]){
                isBest = false;
                }
        if(isBest){
                
            wasBest = true;
            }
    }
    if(wasBest){
        ans++;
        }
}
cout<<ans<<endl;      
    
    
 

 
return 0;
}
char findBigger(char cc[100][100],int n, int m){

 char max;
 int x = 0;
  
 for (int i = 0; i < n; i++) {

    for (int j = 0; j < m; j++) { 
    
      if(cc[j][i]>max){
       max=cc[j][i];
      }
      
    }
 }
 return max;
}
