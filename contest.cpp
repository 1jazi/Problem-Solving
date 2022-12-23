#include<bits/stdc++.h>
#include<cmath>
using namespace std;
class Time {
private:
    int HR, MIN, SEC=0;
public:
 
    void setTime(int x, int y, int z){
        HR = x;
        MIN = y;
        SEC = z;
    }
 

    void showTime(){
        cout << abs(HR) << " "<< abs(MIN);
    }
 
    void normalize(){
        MIN = MIN + SEC / 60;
        SEC = SEC % 60;
        HR = HR + MIN / 60;
        MIN = MIN % 60;
    }

    Time operator-(Time t){
        Time temp;
        temp.SEC = SEC - t.SEC;
        temp.MIN = MIN - t.MIN;
        temp.HR = HR - t.HR;
        temp.normalize();
        return (temp);
    }
};
int main(){
 
  int t,n,m,h,hour,minute,sec=0;
 // Time t1, t2, t3;
  cin>>t;
  while(t--){
   cin>>n>>h>>m;
    t1.setTime(h, m, sec);
   
   for(int i =0;i<n;i++){
    cin>>hour>>minute;
   t2.setTime(hour, minute, sec);
    minute = 60 - hour;
    h = 24 - hour;
     hour-= h;
     minute-=m;
    // t3 = t2 - t1;
     
   }
      //t3.showTime();
   cout<<abs(hour)<<" "<<abs(minute)<<endl;
   
  }

    return 0;
}
