#include<stdio.h> /*math.h*/
int main()
{
	float temp;
	printf("\n Input Temperature : ");
	scanf("%f",&temp);
	
	if(temp<=0)
	{
		printf("\n ICE");
	}
	else if(temp<=100)
	{
		printf("\n WATER");
	}
	else 
	{
		printf("\n STEAM");
	}
}
