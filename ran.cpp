#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;
void randomize(int *array,int index,int size){

 int temp,in;
 
    for(int j= 0;j<size;j++){
    in = index;
      temp = array[j];
      array[j] = array[in];
      array[in] =  temp;
    }
 

}
int main(){
 
 int array2[100][100];
 srand(time(NULL));

   for(int i = 0;i<4;i++){
   
    for(int j = 0;j<3;j++){
      
      array2[i][j] = 1 + (rand() % 9);
      
   if(array2[i][j]!=array2[i+1][j+1]){
      array2[0][0] = 0;
      array2[0][2] = 0;
      array2[3][0] = 0;
      array2[3][2] = 0;
      cout<<array2[i][j];
   }
 
 }
 cout<<endl;
 }
 
 
 

return 0;
}

