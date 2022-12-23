#include<iostream>
#include<cmath>
using namespace std;

int main(){

 int num1, num2, num3;
 cin>>num1;
  cin>>num2;
   cin>>num3;
 
 int minDistance = min(num1,min(num2,num3));
 int maxDistance = max(num1,max(num2,num3));
 int answer = maxDistance - minDistance;
 cout<<answer;
return 0;
}
