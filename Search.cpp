#include<iostream>

using namespace std;
void searchElement(int array[],int element);
int main(){

 int array[]={1,2,3,4,5};
 
  
  /*( for(int element : array){
     cout<<element<<endl;
   }*/
   searchElement(array, 4);


return 0;
}
void searchElement(int array[],int element){

    for(int i = 0;i<100;i++){
      if(array[i]==element){
       cout<<"The element at index : "<<i<<endl;
      }
    }
}
