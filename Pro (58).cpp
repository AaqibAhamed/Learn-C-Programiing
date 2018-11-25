#include<stdio.h>
int main()
{
	float r;
	float area;
	
	printf("\n Input Radius : ");
	scanf("%f",&r);
	/*r=7.0;*/
	area = (22/7.0)*r*r; /*when we using division we should give atleast one value as decimal */
	
	printf("\n Area of the Circle is =%.3f",area);
}
