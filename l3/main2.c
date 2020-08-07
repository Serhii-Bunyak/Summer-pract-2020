#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i,j,B[5][5],A[5],N,S;
	for(i=0;i<5;i++)
	for(j=0;j<5;j++)
	{
		scanf("%d",&B[i][j]);
	}
		for(i=0;i<5;i++)
	A[i]=B[0][i];
		for(i=0;i<5;i++)
	for(j=0;j<5;j++)
	if(A[i]<B[i][j])
	A[i]=B[i][j];
		S=0;
		printf("N=");
		scanf("%d",&N);
		for(i=0;i<5;i++)
	 if(N >A[i])
	 S=S+A[i];	 
	 
	 
for(i=0;i<5;i++)
{

	for(j=0;j<5;j++)
	{
		printf("%4d",B[i][j]);
	}
	printf("\n");
}



 printf("S=%d\n",S);
	
	
	return 0;
}
