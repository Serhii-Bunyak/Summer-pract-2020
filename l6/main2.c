#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main()
{

	int k,i,j;
	k=0;
	j=0;
	int N,An;
	An=0;
   char *myString; // указатель типа char
myString = malloc( sizeof(*myString) * 64 ); // выделение памяти
 char *myString1; // указатель типа char
myString1 = malloc( sizeof(*myString1) * 64 );
    printf( "Ryadok: " );
 
    fgets( myString, 100, stdin ); // считываем из потока ввода строку

    printf( "TEST: %s", myString );
    N=strlen(myString)-1;
 
 for( i=0;i<N;i++)
 {
 	if((myString[i]=='a') || (myString[i]=='A'))
 	An++
 ;}
    getchar();
    
    
    printf( "Kilkist: %d\n", N );
    printf( "Kilkist a: %d\n", An );
    
    for( i=0;i<N;i++)
{
	if(k==0)
	{
    printf("%c",myString[i]);
    if(myString[i]==' ')
    k++;
    }
    
    if(k==1)
    {
    printf("%c",myString[i] );	
    k++;
    
    }
    
 if((k==2) && (myString[i]==' '))
 {
 
 printf( "%c.",myString[i+1] );
 
 	
 }
 }   
 
    return 0;
}
