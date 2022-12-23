#include<iostream>
using namespace std;
int main(){

  string name;
  cout<<"Enter your name"<<endl;
  getline(cin , name);
  //name.clear();
  //name.empty();
  //name.insert(0,#);
  cout<< "The char a is at index : "<< name.find('a')<<endl;
  name.append("@gmail.com"); // add to string
  cout<<name<<endl;
  cout<<name.length()<<endl;
  //delete specifec char
  cout << name.erase(0,3)<<endl;
  //get an spcifec char at srting --> .at()
  
 // cout<<name.at(0)<<endl;
return 0;
} 
