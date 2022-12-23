#include<bits/stdc++.h>
using namespace std;
int main(){
    int  c=0;
    string a;
    cin >> a;
    int b = a.size();
    for (int i = 0; i < a.size(); i++) {
        if (a[i] == '(') {
            c++;
        } else if (a[i] == ')') {
            c--;
            if (c < 0) {
                b--;
                c = 0;
            }
        }
    }
    //cout<<c<< " ------------------ ";
    cout << b - c;
 return 0;
}
