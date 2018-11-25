#include<stdio.h>
int main()
{
	float r,area;
	
	do
	{
		printf("\n Input Raduis :  ");
		scanf("%f",&r);
		
		if(r<1)
		{
			printf("\n Invalid Input !\n");
			continue;
		}
		
		if(r==100)
		break;
		
		area=(22/7.0)*r*r;
		printf("\n Area of the Circle : %.2f\n",area);
		
	}while(r>=1 || r<=99);
}
