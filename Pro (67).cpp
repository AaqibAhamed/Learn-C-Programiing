#include<stdio.h>
int main()
{
	float S,D;
	char G;
	
	printf("\n Enter Grade  : ");
	G=getchar();
	
	printf("\n Enter Salary :");
	scanf("%f",&S);
	
	switch(G)
	{
		case 'A':
		D=S*25/100.0;
		S=S+D;
		break;
		
		case 'B':
		D=S*22/100.0;
		S=S+D;
		break;
		
		case 'C':
		D=S*18/100.0;
		S=S+D;
		break;
		
		case 'D':
		D=S*15/100.0;   
		S=S+D;
		break;
		
		default :
		D=S*12/100.0;
		S=S+D;
		break;
		
	}
	
	printf("\n Net Salary : %.3f",S);
}
