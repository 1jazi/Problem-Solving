#include <iostream>
using namespace std;
int main()
{

  char word[1000];
  cin >> word;
  string st = word;
  // cout<< st <<endl;
  // int s = sizeof(word)/sizeof(char);
  cout << st << endl;
  int count = 0;

  /*for(int i =0 ; i<sizeof(word)/sizeof(char);i++){
    if(st.find("HTU") != string::npos){
     count ++;
    // break;
    }else{
     count++;
    }
  }*/
  for (char ch = 'a'; ch <= 'z'; ch++)
  {
    if (st.find("HTU"))
    {
      count++;
      break;
    }
  }
  cout << count << endl;
  return 0;
}
