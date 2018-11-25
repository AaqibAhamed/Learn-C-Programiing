#include<stdio.h>
int main()
{
	long F=1;
	int i,n;
	
	printf("\n Enter a Factorial Value : ");
	scanf("%d",&n);
	
	printf("\n  Value     Factorial ");
	printf("\n -------   -----------");
	
	for(i=1;i<=n;i++)
	{
		F*=i;
		printf("\n %3d         %ld",i,F);
	}
	

}
