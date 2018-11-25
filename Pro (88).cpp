#include<stdio.h>
int main()
{
	int n,i;
	float prd=1,m;
	
   printf("\n How many Numbers Do You Have ? ");
   scanf("%d",&n);
   
   for(i=1;i<=n;i++)
   {
   	 scanf("%f",&m);
   	 prd=prd*m;
   	 printf("\n%f  \n %f ",m,prd);
   }
   
   printf("\n Cumulative Product %f ",prd);
   
}
