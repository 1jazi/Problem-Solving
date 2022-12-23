#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n=4,c=0;
    int a[1000];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    sort(a,a+n);
    for(int i=0; i<n; i++){
        if(a[i]!=a[i+1])
            c++;
    }
    cout<<n-c<<endl;

}
int main(){
	solve();
     /*   int t,n;
	cin>>t;
	while(t--){
		scanf("%d",&n);
		for(int i=0;i<n;++i){
	        scanf("%*d");
		}
		n=10-n;
	      
	   
                cout<<(3*n*(n-1))<<endl;
	}*/


return 0;
}
