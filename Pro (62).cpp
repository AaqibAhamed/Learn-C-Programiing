#include<stdio.h>
#include<math.h>
int main()
{
	float R,V,A;
	
	float pi=22/7.0;
	
	printf("\n Input Radius of Sphere = ");
	scanf("%f",&R);
	
	V=4/3.0*pi*pow(R,3);
	
	A=4*pi*pow(R,2);
	
	printf("\n Volume of Sphere =%.3f",V);
	printf("\n Area of Sphere   =%.3f",A);
}
