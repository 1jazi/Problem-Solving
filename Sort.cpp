#include<iostream>

using namespace std;

int sort(int array[], int size);
int main(){

 int array[] = {8,9,4,5,6,1,3,7,2};
 int size = sizeof(array)/sizeof(array[0]);
 cout<<sort(array,size)<<endl;
 
  for(int i=0;i<size;i++){
   cout << array[i] << " ";
  }
  cout<< endl;

return 0;
}
int sort(int array[],int size){
   int temp;
 for(int i = 0; i<size;i++){
 
   for(int j = 0; i<size-i-1;j++){
     if(array[j]>array[j+1]){ 
       temp = array[j];
       array[j]=array[j+1];
       array[j+1]=temp;  
     }
    }
   }
   return temp; 
}
