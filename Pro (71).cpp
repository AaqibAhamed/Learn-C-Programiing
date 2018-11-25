#include<stdio.h>
int main()
{
	long sum=0;
	int i,n;
	
	printf("\n Input a Number :");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	sum=sum + i;
	printf("\n Sum of the Values : %ld",sum);
	
}
