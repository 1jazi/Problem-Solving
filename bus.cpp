#include<bits/stdc++.h>
using namespace std;
int main(){

    int n,i,t=0;
    cin>>n;
    string s;
    string str[n+10];

    for(i=0; i<n; i++){
        cin>>s;
        //cout<<s<<endl;
        if(s[0]=='O' && s[1]=='O' && t==0){
            //cout<<s[0]<<endl;
            s[0]='+';
            s[1]='+';
            t=1;
            str[i]=s;
        }
        else if(s[3]=='O' && s[4]=='O' && t==0){
        //cout<<s[3]<<endl;
            s[3]='+';
            s[4]='+';
            t=1;
            str[i]=s;
        }
        else{str[i]=s;}
    }

    if(t==1){
        cout<<"YES"<<endl;
        for(i=0; i<n; i++){
            cout<<str[i]<<endl;
        }
    }
    else{cout<<"NO"<<endl;}

    return 0;
}
