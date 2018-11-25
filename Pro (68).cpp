#include<stdio.h>
int main()
{
	
	long n,sum;
	
/*	n=12345;*/
    printf("\n Input Numbers :");
    scanf("%d",&n);
    
	sum=0;
	
	while(n>0)
	{
		sum=sum+n%10;
	    n=n/10;
	}
	
	printf("\n Sum of the Numbers : %d",sum);
	
}
