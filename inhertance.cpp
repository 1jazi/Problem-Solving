#include<iostream>
using namespace std;

class Main{

 public:
 string name = "jazi";

};
class names: public Main{


};
int main(){

 names n;
 cout<<n.name<<endl;


return 0;
}
