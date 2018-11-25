#include<stdio.h>
int main()
{
	int n ,factorial;
    printf("  Input Number(n>0) :");
	scanf("%d",&n);
	factorial=1;
	while(n>0)
	{
	factorial=factorial*n;
	n=n-1;
   }
	printf("  Display factorial %d",factorial);
}
