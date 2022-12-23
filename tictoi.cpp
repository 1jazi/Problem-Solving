#include<bits/stdc++.h>
using namespace std;

 char board[3][3];
 const char PLAYER = 'X';
 const char computer = 'O';
 
void resetBoard();
void printBoard();
int checkFreeSpaces();
void playerMove();
void computerMove();
char checkwinner();
void printWinner();

int main(){
 
  char winner = ' ';
  resetBoard();
  printBoard();
  while(winner == ' ' && checkFreeSpaces() != 0){
    printBoard();
    playerMove();
    winner = checkwinner();
  }


return 0;
}
void resetBoard(){
  
   for(int i = 0;i<3;i++){
    for(int j = 0;j<3;j++){
       board[i][j];
    }
   }
 
}

void printBoard(){
  
   cout<<board[0][0]<<"   |   "<<board[0][1]<<"|"<<board[0][2];
   cout<<endl<<"---|---|---"<<endl;
   
   cout<<board[1][0]<<"   |   "<<board[1][1]<<"|"<<board[1][2];
   cout<<endl<<"---|---|---"<<endl;
   
   cout<<board[2][0]<<"   |   "<<board[1][2]<<"|"<<board[2][2];
   cout<<endl;
 
}

int checkFreeSpaces(){

  int freeSpaces;
  
   for(int i = 0;i<3;i++){
    for(int j = 0;j<3;j++){
      if(board[i][j]!=' '){
        freeSpaces--;
      }
    }
   }
 return freeSpaces;
}

void playerMove(){
 
  int x,y;
  do{
  cout<<"Enter row (1-3) : ";
  x--;
  cout<<"Enter column (1-3) : ";
  y--;
   
  if(board[x][y] != ' '){
    cout<<"Invalid move"<<endl;
  }else{
   board[x][y] = PLAYER;
   break;
  }
  }while(board[x][y] != ' ');
}

void computerMove(){

}

char checkwinner(){
 return 'i';
}

void printWinner(){

}
