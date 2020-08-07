#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
		int i,M,N,k1,k2;
		k1=0;
		k2=0;
		int  *a,*b;
N=4;
M=4;
 
   a = (int*)malloc(N*sizeof(int));

  
    b = (int*)malloc(M*sizeof(int));
  
 
   for(i=0;i<N;i++)
   {
   
 scanf("%d",&a[i]);
   if(a[i]%3==0)
   k1++;
   }
    
   for(i=0;i<M;i++)
    {
   
  scanf("%d",&b[i]);
   if(b[i]%3==0)
    k2++;
   }
   
   
   

   
   if(k1==k2)
   {
   for(i=0;i<N;i++)
   printf("%d ",a[i]);
   for(i=0;i<M;i++)
 printf("%d ",b[i]);
}

if(k1>k2)
   {
   for(i=0;i<N;i++)
   printf("%d ",a[i]);
   	
}
if(k1<k2)
   {
   
   for(i=0;i<M;i++)
 printf("%d ",b[i]);
}
free(a);
free(b);
	return 0;
}
