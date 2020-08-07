#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


void fun( int x[],int y[],int i,int n)
{
	for(i=0;i<n;i++)
if((x[i]==0) || (y[i]==0))
{
printf("(%d ; %d) - Na OCI",x[i],y[i]);
}
else
{
	
	if((x[i]>0) && (y[i]>0))
	{
		printf("(%d;%d) - area I\n",x[i],y[i]);	
	}
	if((x[i]<0) && (y[i]>0))
	{
		printf("(%d;%d) - area II\n",x[i],y[i]);
	}
	if((x[i]<0) && (y[i]<0))
	{
		printf("(%d;%d) - area III\n",x[i],y[i]);
	}
	if((x[i]>0) && (y[i]<0))
	{
		printf("(%d;%d) - area IV\n",x[i],y[i]);
	}
}

}
int main(int argc, char *argv[]) {
	int n;
	n=3;
	int i,x[n],y[n];
for(i=0;i<n;i++)
{

	scanf("%d",&x[i]);
	scanf("%d",&y[i]);
}	
	fun(x,y,i,n);



	return 0;
}
