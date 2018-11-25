#include<stdio.h>
int main()
{
	int i,sum=0;
	for(i=2;i<=30;i+=2)
	{
		sum=sum+i;
		printf("\n %4d  %4d",i,sum);
	}
	printf("\n Sum of The Value : %d",sum);
	
	
}
