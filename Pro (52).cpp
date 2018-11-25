#include<stdio.h>
int main()
{
	int a=10,b=150,c=9;
	float d=a*b*c+0.0125;
	
	printf("A=%d B=%d C=%d",a,b,c);
	printf("\nA=%3d B=%5d C=%4d",a,b,c);
	printf("\nA=%03d B=%05d C=%04d",a,b,c);
	printf("\nA=%-3d B=%-5d C=%-4d",a,b,c);
	printf("\nD=%012.6f",d);
	printf("\n\t\t***\n\t*****\n*******");
	
}
