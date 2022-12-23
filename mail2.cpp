#include<bits/stdc++.h>
using namespace std;

int main(){
 
    int n;
    cin>>n;
    int a[n],mx[n],mn[n];
        for(int i=0;i<n;i++) {
            cin>>a[i];
        } 
               
        int start=a[0];
        int end=a[n-1];
        
        for(int i=0;i<n;i++){
            mx[i]=max(abs(start-a[i]),abs(end-a[i]));
            mn[i]=min(abs(a[i+1]-a[i]),abs(a[i]-a[i-1]));
            if(i==0){
                mn[i]=abs(start-a[i+1]);
            }
            else if(i==n-1){
                mn[i]=abs(end-a[i-1]);
            }
            cout<<mn[i]<<" "<<mx[i]<<endl;
        }
        

    return 0;
}
