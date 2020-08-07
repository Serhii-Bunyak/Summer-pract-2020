#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float x,y;
 	printf("Vvedit chusla - ");
 	scanf("%f %f",&x,&y);
 	if((((x>=0) && (y>=0)) && ((x*x+y*y)<=1)) || ((x<=0) && (y>=0) && (y>=x) && (x*x+y*y)<=1) )
 		printf("True");
 		else
 		printf("False");
 		
	return 0;
}
