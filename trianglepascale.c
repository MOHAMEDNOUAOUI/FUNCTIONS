

#include <stdlib.h>
#include <stdio.h>

int main (){
  int T[20][20];
  int n;
  int i,j;
  printf("enter a number : ");
  scanf("%d",&n);

  for(int i=0;i<n;i++){
    T[i][i]=1;
    T[i][0]=1;
  }
  for ( i = 2; i <n; i++)
  {
    for(j=1;j<i;j++){
      T[i][j]=T[i-1][j-1]+T[i-1][j];
    }
  }

  for (i = 0; i < n; i++)
  {
    for(j=0;j<n-i;j++){
      printf("  ");
    }
    for(j=0;j<=i;j++)
    {
      printf("%6d ",T[i][j]);
    }
    printf("\n");
  }
  
  

  return 0;
}