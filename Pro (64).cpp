#include<stdio.h>
int main()
{  

   float S,D;
   
   D=0;
   
   printf("\n Enter Salary :");
   scanf("%f",&S);
   
   if(S<2500)
   {
   	 D=S*50/100.0;
   	 S=S+D;
   	 printf("\n Net Salary :%.3f",S);
   }
   else
   {
   	printf("\n Salary : %.3f",S);
   }
	

	
	

}
