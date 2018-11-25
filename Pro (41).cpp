#include<stdio.h>
int main()
{
	int marks[5];
	int arr =0;
	printf("Please Enter 5 Integer Value : ");
	for(arr=0;arr<5;arr++)
	{
		scanf("%d",&marks[arr]);
		
	}
	printf("\n");
	printf(" Entered Marks are : ");
	for(arr=0;arr<5;arr++)
	{
		printf("\t%d",marks[arr]);
	}
	
}
