#include<stdio.h>
 main()
{
	int n,factorial;
	printf("Enter a number,greater than zero to calculate the factorial\n :");
	scanf("%d",&n);
	factorial=1;
	printf("Factorial :");
	while(n>0)
	{ 
	     factorial=factorial*n;
	    n=n-1;
		
	}
	printf("%d\n",factorial);
}

	

