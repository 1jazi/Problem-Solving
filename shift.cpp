#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;
void randomize(int *array,int size, int index);
void shiftArray(int *array, int index);
int main(){

 srand(time(NULL));
 int x = 3;
 int array[] = {1,2,3,4,5,6};
 int size = sizeof(array)/sizeof(array[0]);
 //randomize(array,size,x);
 shiftArray(array, 1);
 for(int i = 0;i<size;i++){
  cout<<array[i]<<endl;
 }		

return 0;
}
void randomize(int *array,int size, int index){

 for(int i = 0;i< size;i++){
   
   int temp = array[i];
   array[i] = array[index];
   array[index] = temp;
   
 }

}
void shiftArray(int *array, int index){

 int temp = array[index];
 for(int i = index;i>0;i--){
  array[i]=array[i-1];
 }
 array[0] = temp;
}
