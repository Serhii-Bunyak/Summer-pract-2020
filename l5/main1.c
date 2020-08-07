#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i,n,x[1],k;
 scanf("%d",&n);
	
	k=0;
float S, *mass;
S=0;
  mass = (float*)malloc(n*sizeof(float));
   srand(time(NULL));
    for(i=0;i<n;i++)
    scanf("%f",&mass[i]);
    
    for(i=0;i<n;i++)
     printf("%f\n",mass[i]);
    
    
    
    
    
     for(i=0;i<n;i++)
     if(k<=1)
     {
     if(mass[i]>0)
     {
     x[k]=i;
	 k++;      
	 }}      
	 else
	 {}
	 for(;x[0]<=x[1];x[0]++)
	 
	 S=S+abs(mass[x[0]]);	
	 
	 
	 printf("%.0f",S);
	 free(mass);
	return 0;
}
