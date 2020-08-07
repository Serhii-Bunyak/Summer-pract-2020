#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int n,S;
	n=7;
	S=0;
	int i,j,D[n][n];
	for(i=0;i<n;i++)
	for(j=0;j<n;j++)
	{
		scanf("%d",&D[i][j]);
	}
	
	
	for(i=0;i<n;i++)
{

	for(j=0;j<n;j++)
	{
		printf("%4d",D[i][j]);
	}
	printf("\n");
}
for(i=0;i<n;i++)
	for(j=0;j<n;j++)
if((j+i>6) && (   (j==6)   ||   (i==6)      ))

S=S+D[i][j];
printf("S=%d",S);



	
	return 0;
}
