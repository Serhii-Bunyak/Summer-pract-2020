#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int k,n,m,i,j,b,x1,x2;
	n=3;
	m=2;
	int A[n][m],B[n*m];
	k=0;
	for(i=0;i<n;i++)
	for(j=0;j<m;j++)
	{
	    
		scanf("%d",&A[i][j]);
		B[k]=A[i][j];
		k++;
	}
	
	
	for(i=0;i<n;i++)
{
	for(j=0;j<m;j++)
	{
		printf("%4d",A[i][j]);
	}
	printf("\n");
}
		for(j=0;j<k;j++)
	for(i=1;i<k;i++)
	if(B[i]>B[i-1])
	{
	b=B[i];
	B[i]=B[i-1];
	B[i-1]=b;
	}
	for(j=0;j<k;j++) 
		printf("%d\n",B[j]);
x1=B[0];
x2=B[1];

for(i=0;i<n;i++)
{
	for(j=0;j<m;j++)
	{
		if((A[i][j]==x1) || (A[i][j]==x2))
	     printf("%4d",0);
	     else
		printf("%4d",A[i][j]);
	}
	printf("\n");
}
	
	return 0;
}
