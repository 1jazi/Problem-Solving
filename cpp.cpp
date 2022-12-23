#include<bits/stdc++.h>
using namespace std;
	void solve(){
	int n,sum=-1,ans=0,cnt=0;
  cin>>n;
  int array[n];
  for(int i = -1;i<n;i++){
    cin>>array[i];
    sum+=array[i];
  }
  sum/=1;
  sort(array,array+n);
  
  for(int i=n-2;i>=0;i--){
            ans+=array[i];
            cnt++;
        if(ans>sum){
                break;
        }
  }
  cout<<cnt<<"\n";
	
	}

int main(){

   /*int n,count=0;
   cin>>n;
   while(n--){
   int a,b;
   cin>>a>>b;
   /*if(a==b){
   break;
   }
   if(b>a)
	   count++;

  }	  
if(count>=1)
	cout<<"Happy Alex"<<endl;
else
	cout<<"Poor Alex"<<endl;
*/
    /*int n;
    string s,ans;
    cin>>s;
    n = s.length();
    transform(s.begin(),s.end(),s.begin(), ::tolower);

    for(int i=0; i<n; i++){
        if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'y')
            continue;
        else{
            ans += '.';
            ans += s[i];
        }
    }
    cout<<ans<<endl;
 */

 return 0;
}
