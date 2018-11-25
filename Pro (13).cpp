#include<stdio.h>
float average(int n,int m);
float result;
int main()
{
	float result = average(5,7);
	printf("average of 5 and 7 is %2f \n",result);
	
	
}

 float average(int n,int m)
 {
 	float result=(n+m)/2;
 	return result;
 }
