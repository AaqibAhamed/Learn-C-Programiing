#include<stdio.h>
int main()
{
	char x, y[50];
	
	printf("Enter Your Name :");
	
	x=getchar();
	gets(y);
	printf("\nInitial=%c Name=%s",x,y);
}
