#include<iostream>
using namespace std;
int main(){

 double temp;
 char unit;
 cout<<"*********Temperature conversion*********"<<endl;
 cout<<"F -> Feherenhit"<<endl;
 cout<<"C -> celisuis"<<endl;
 cout<<"What the Type conversion you want ? "<<endl;
 cin >> unit;
 if(unit == 'f'){
  cout<< "Enter the temperature in celisuis : ";
  cin>>temp;
  temp  = (1.8 * temp) + 32.0;
  cout<<"The temperature in fehrenhite = "<<temp<<" F"<<endl;
 
 }else if(unit == 'c'){ 
  cout<< "Enter the temperature in fehernhite : ";
  cin>>temp;
  temp  = (temp - 32) / 1.8;
  cout<<"The temperature in celisuis = "<<temp<<" C"<<endl;
 }

return 0;
}
