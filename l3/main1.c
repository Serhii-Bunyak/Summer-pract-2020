#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int S,L[5][4],i,j,min,max;
	for(i=0;i<5;i++)
	for(j=0;j<4;j++)
	{
		
		scanf("%d",&L[i][j]);
	}
	max=L[0][0];
	min=L[0][0];
	for(i=0;i<5;i++)
	for(j=0;j<4;j++)
{
	if(max<L[i][j])
	max=L[i][j];
	if(min>L[i][j])
	min=L[i][j];
}
S=(max+min)/2;
 printf("MAX=%d\n",max);
 printf("MIN=%d\n",min);
 printf("S=%d\n",S);
	
	
	return 0;
}
