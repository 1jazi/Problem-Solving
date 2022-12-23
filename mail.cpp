#include<iostream>
using namespace std;
int minValue(int array[],int size);
int maxValue(int array[],int size);
int main(){

 int num;
 cin>>num;
 int array[num];
 int ans;
 int min;
 int max;
 for(int i = 0;i<num;i++){
  cin>>array[i];
  
   min = minValue(array,num);
   max = maxValue(array,num); 
    ans = max - min;
  cout<<ans<<endl;
 }
  for(int i=0;i<num;i++){
 
	if(array[i]>array[0]&&array[i]<array[num-1]){
	 ans = array[i] - min;
	}
	 cout<<ans<<"  ";
   }
    

return 0;
}
int minValue(int array[], int size){

 int min;
 
 for(int i =0 ; i<size;i++){
  if(array[i]<min){
   min=array[i];
  }
 }
 return min;
}
int maxValue(int array[], int size){

 int max;
 
 for(int i =0 ; i<size;i++){
  if(array[i]>max){
   max=array[i];
  }
 }
 return max;


}
