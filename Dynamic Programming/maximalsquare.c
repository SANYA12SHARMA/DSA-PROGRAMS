#include <stdio.h>
#include <assert.h>


int min(int a,int b){
  return (a<b)? a:b;
}

int max(int a,int b){
  return (a>b)? a:b;
}
int maximal_square(char** matrix){
  int rows=matrix.size();
  int cols=matrix[0].size();
  //single row and single column
  if(rows==1 && cols==1){
    return matrix[0][0]-'0';
  }
  //single row
  if(rows==1){
    for(int j=0;j<cols;j++){
      if(matrix[0][j]=='1'){
        return 1;
      }
    }
  }
  
  //single column
  if(cols==1){
    for(int i=0;i<rows;i++){
      if(matrix[i][0]=='1'){
        return 1;
      }
    }
  }
  int maxsquare=0;
  int output[rows][cols];
  for(int i=0;i<rows;i++){
    for(int j=0;j<cols;j++){
      output[i][j]=0;
    }
  }

  //initialise first row
  for(int j=0;j<cols;j++){
    if(matrix[0][j]=='1'){
      output[0][j]=1;
      maxsquare=1;
    }
  }

  //initialise first col
  for(int i=0;i<rows;i++){
    if(matrix[i][0]=='1'){
      output[i][0]=1;
      maxsquare=1;
    }
  }

  //recurrence relation
  for(int i=1;i<row;i++){
    for(int j=1;j<cols;j++){
      if(matrix[i][j]=='0'){
        continue;
      }
      output[i][j]=1+min(matrix[i][j-1],min(matrix[i-1][j],matrix[i-1][j-1]));
      maxsquare=max(output[i][j],maxsquare);
    }
  }
  return maxsquare*maxsquare;
}
int main(){
  assert(maximal_square( {{'1','0','1','0','0'},
  {'1','0','1','1','1'},
  {'1','1','1','1','1'},
  {'1','0','0','1','0'}})==4);

  assert(maximal_square( {{'0','1'},{'1','0'}})==1);

  assert(maximal_square( {{'0'}})==0);

  return 0;
}
