#include <bits/stdc++.h>
using namespace std;
    
     
int main() {
int l,t,s;
    cin>>t;
        while (t--) {
            cin>>s; 
            l=10;
            while (s>l-1){
             s-=--l;
            }
            for (cout<<s; l<=9; ++l){
             cout<<l;
            }
            cout<<endl;
        }
    }
