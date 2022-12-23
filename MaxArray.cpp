#include<iostream>

using namespace std;
int findMax(int *array, int size);
int main(){

  int array[] = {50,66,78,34,56,205,7,12,43};
  int size = sizeof(array)/sizeof(int);
  for(int i=0;i<sizeof(array)/sizeof(int);i++){
    cout<<array[i]<<endl;
  } 
   int maxNum = findMax(array,size);
     
   cout<<"The maximum number in the array -> "<< maxNum << endl;
return 0;
}
int findMax(int *array, int size){
 int maxNum=0;
 int minNum =0;
 for(int i=0;i<size;i++){
  
   if(array[i]>maxNum){
   maxNum = array[i];
   }
   
  
 }
  
  return maxNum;
}

