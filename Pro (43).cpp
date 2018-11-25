#include<stdio.h>
float avg(int n,int m);
float result;
int main()
{
	float result=avg(5,7);
	printf("Avg of 5,7  %2f \n",result);
	
	
}
   float avg(int n,int m)
   {
   	 float result=(n+m)/2;
   	 return result; 
   }
	

