#include <stdio.h>

int main()//
{
	int x,y;// x and y two intger values will be compared
	
	printf(" Enter a positive integer as the first value : ");
	scanf("%d", &x);
	printf(" Enter another positive integer to compare : ");
	scanf("%d", &y);
	
	if(x==y)
	{
			printf("\n first value is equal to second value\n" );
		}
	else if(x>y)
		{
		printf("\n first value is greater than second value\n" );
	}
	else 
		{
		printf("\n first value is smaller than second value\n" );
	}
}

