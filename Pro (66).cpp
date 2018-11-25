#include<stdio.h>
int main()
{
	float S;
	char G;
	
	printf("\n Input Grade  : ");
	G=getchar();
	
	printf("\n Input Salary : ");
	scanf("%f",&S);
	
	if(G=='A')
	
		S=S*1.35;   /* for 'if'condition if v need v can use {} for statements*/
	
	else if(G=='B')
	{
		S=S*1.25;
	}
		
	else if(G=='C')
	{
		
		S=S*1.15;
	}
	
	else
	{
		
		S=S*1.05;
		
	}
	
	
	printf("\n Net Salary : %.3f",S);
	
}
