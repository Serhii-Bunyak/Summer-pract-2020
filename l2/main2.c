#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i,j,R[10],b,S;
	S=0;
	for(i=0;i<10;i++)
	{
	scanf("%d",&R[i]);	
	}
	printf("\n");
	for(j=0;j<10;j++)
	for(i=1;i<10;i++)
		if(R[i]>R[i-1])
		{
			b=R[i];
			R[i]=R[i-1];
			R[i-1]=b;
		}
			for(i=0;i<10;i++)
			printf("%d\n",R[i]);
for(i=0;i<5;i++)
S=S+R[i];
	printf("%d\n",S);
	return 0;
}
