#include<stdio.h>
#include<math.h>
int main()
{
	float p,r,i,F;
	int n;
	
	printf("\n Input Principal :");
	scanf("%f",&p);  /*	p=50000;*/
	printf("\n Input Intrest Rate :"); /*	r=12;*/
	scanf("%f",&r);
	i=r/100;
	printf("\n Numbers of Year :");/*n=5;*/
	scanf("%d",&n);

	F=p*pow(1+i,n);
	
	printf("\n Amount of Compound Intrest = %.3f",F);
}
