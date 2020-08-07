#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int S,X[8],i;
	S=0;
	for(i=0;i<8;i++)
	{
		
		scanf("%d",&X[i]);
	}
	
	for(i=0;i<8;i++)
	{
		S=S+X[i]*X[i];
	}
	S=S/8;
 
 printf("S=%d\n",S);
	
	
	return 0;
}
