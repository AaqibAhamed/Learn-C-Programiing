#include<stdio.h>
int main()
{
	int n,i;
	float sum =0,s;
	
	printf("\n How many Numbers : ");
	scanf("%d",&n);
	
	printf("\n Enter Number One by One : ");
	
	
	for(i=1;i<=n;i++)
	{
		scanf("%f",&s);
		sum=sum+s;
	}
	 
	 printf("\n Sum of the Number : %.3f  Average of The Numbers : %.3f",sum,sum/n  );

}

