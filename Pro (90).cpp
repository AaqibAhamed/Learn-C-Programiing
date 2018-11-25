#include<stdio.h>
#include<math.h>
int main()

{
	long i, n=0;
	long pc=0;

	
	int upto,primeflag;
	
	printf("\n S.No      Prime No ");
	
	while(pc<100)
	{
		++n;
		upto=sqrt(n);
		primeflag=1;
		for(i=2;i<=upto;i++)
		{
			if (n%i==0)
			{
					primeflag=0;
					break;
			}
	
		 
		}
			if  (primeflag==1);
		   {
		 	 pc++;
		    printf("\n %3d     %ld  ",pc,n);
	       } 
		}
				
	
}
