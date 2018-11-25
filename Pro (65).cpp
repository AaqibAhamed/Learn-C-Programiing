#include<stdio.h>
int main()
{
	float Sal;
	char G;
	
	printf("\n Enter Grade  :");
	G = getchar();
	
	printf("\n Enter Salary :");
	scanf("%f",&Sal);
	
	
	if(G=='A' || G=='B' || G=='C')
		Sal=Sal*1.5;
	
	else	
	
	    Sal=Sal*1.25;
	
	
	printf("\n Net Salary = %.2f ",Sal);
}
