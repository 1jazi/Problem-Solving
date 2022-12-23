#include<iostream>
using namespace std;
void sort(int array[], int size);
int main(){

  int array[] = {4,8,7,6,3,1,9};
  int size = sizeof(array)/sizeof(array[0]);
  for(int i  : array){
    cout << i << endl;
  }
  
  sort(array, size);
  cout<<"The array after sorting : "<<endl;
   for(int i  : array){
    cout << i << endl;
  }
  string s;
  for(int i = 0; i< size;i++){
   s += array[i];
  }
  cout<<s<<endl;
return 0;
}
void sort(int array[], int size){
 
  for(int i =0;i<size-1;i++){
   for(int j = 0;j<size-1 - i;j++){
    
    if(array[j]>array[j+1]){
      int temp = array[j];
      array[j] = array[j+1];
      array[j+1] = temp;
    }

   }
  }

}

