#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int N,M,i,j,S ;
	N=6;
	M=5;
	  srand(time(NULL));
	int **A = (int **)malloc(N*sizeof(int *));
for(i = 0; i < N; i++) {
    A[i] = (int *)malloc(M*sizeof(int));
}
 for(i=0;i<N;i++)
  for(j=0;j<M;j++)
  
	A[i][j]=rand() %90;
	
	 for(i=0;i<N;i++)
	 {
	 
  for(j=0;j<M;j++)
  {
  	printf("%4d  ",A[i][j]);
  }
  printf("\n");
  }
  S=0;
  for(i=0;i<N;i++)
  for(j=0;j<M;j++)
  if((i==0) || (i==2))
  {
  	S=A[i][j]+S;
  }
  	printf("%d \n ",S);
	return 0;
}
