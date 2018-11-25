#include<stdio.h>
int main()
{
	int i,n,j;
	
	printf("\n Input Five Numbers Between (1-30) : \n");
	
     for(i=1;i<=5;i++)
	{
		
		scanf("%d  ",&n);
	printf("\n %2d " ,n);
	
	for(j=1;j<=n;j++)
	{
		printf("*");
	}
	
	
   }
	
}
