#include<stdio.h>
int main()
{
	int n,F1,F2,Fn,i;
	F1=F2=1;

	
	printf("\n How many Numbers of FIBONACCI SERIES (n>2) : ");
	scanf("%d",&n);
	
	printf(" %d %d ",F1,F2);
	
	for(i=3;i<=n;i++)
	{
		Fn=F1+F2;
		printf(" %d ",Fn);
		F1=F2;
		F2=Fn;
		
	}
	
	
}
