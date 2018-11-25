#include<stdio.h>
int main()
{
	int i,product ;
	printf("\n Value    Product Value");
	for(i=1;i<=15;i+=2)
	{
		product*=i;
		printf("\n %-5d  %10d",i,product);	
	}
	
	printf("\n Product of Odd Numbbers : %3d",product);
}
