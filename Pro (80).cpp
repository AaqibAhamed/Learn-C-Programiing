#include<stdio.h>
int main()
{
	int i,j,n,v;
	printf("\n Enter No of Values : ");
	scanf("%d",&n);
	printf("\n Input Values : \n ");
	for(i=1;i<=n;i++)
	{
		 	scanf("%d",&v);
		 	printf("\n%2d  ",v);
	
	for(j=1;j<=v;j++)
	{
		printf("*");
	}
	}

	
}
