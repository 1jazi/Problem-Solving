#include<iostream>
using namespace std;
int main(){

 int money,coin,count=0;
 cin>>money;
 int array[]={100,20,10,5,1};
   
    for(int i=0; i<sizeof(array)/sizeof(array[0]); i++){
        count+=money/array[i];
        money%=%array[i];
    }
    cout<<count<<endl;

return 0;
}
