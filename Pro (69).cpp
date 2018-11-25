#include<stdio.h>
int main()
{
	long n,sum;
	char option;
	
	do
	{
		printf("\n Enter The Value : ");
	    scanf("%d%c",&n,&option);
	    sum=0;
		while(n>0)
		{
			sum=sum+n%10;
			n=n/10;
		}
		printf("\n Sum of The Values : %d",sum);
		printf("\n Do you want to continue (Y/N) : ");
	    option = getchar();
		
	}
	while(option=='Y' || option=='y');
	
}
