#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

 struct person
{

	char name1[50];
	char name2[50];
	char city[50];
	int score[10];
} ;
int main(void)
{
	
	 	printf("Vvedit Misto: ");
  char *myString; // ��������� ���� char
myString = malloc( sizeof(*myString) * 64 ); // ��������� ������
fgets( myString, 100, stdin ); // ��������� �� ������ ����� ������

	int i,j,k1;
	k1=0;
	struct person arr[3];
	for(i=1;i<=3;i++)
	{
  
	printf("Enter name1: ");
	scanf("%s", &arr[i].name1);
		printf("Enter name2: ");
	scanf("%s", &arr[i].name2);
	printf("Enter city: ");
	scanf("%s", &arr[i].city);
	printf("Name1: %s  Name2: %s \t city:%s\n", arr[i].name1, arr[i].name2, arr[i].city);
	printf("Score\n");
	for(j=0;j<10;j++)
	{
		
	printf("%d : ",j+1);
	scanf("%d",&arr[i].score[i]);
	}
	}
 
	for(i=1;i<=3;i++)
	if(arr[i].city==myString)
	k1++;
	printf("\nV misti - %d",k1);
	
	
	
	
	
	return 0;
}
