#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;

int main(){

 int n, k, l, c, d, p, nl, np;
 cin>>n; cin>>k; cin>>l; cin>>c;
 cin>>d; cin>>p; cin>>nl; cin>>np;
 int first = (k*l)/nl;
 int second = c*d;
 int secondAns = p/np;
 int minn = min(second,secondAns);
 int ans = min(first,minn)/n;
 
 cout<<ans<<endl;

return 0;
}
