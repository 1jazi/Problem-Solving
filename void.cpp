#include<iostream>
using namespace std;
int main(){
 
  int a = 50;
  void *p0 = &a;
  int *p1 = &a;
  cout<<"Void = "<<p0<<endl;
  cout<<"Integer = "<<p1<<endl;
return 0;
}
