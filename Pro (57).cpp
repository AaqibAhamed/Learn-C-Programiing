#include<stdio.h>
int main()
{
	int x;
	float y;
	char d;
	char s[50];
	
	printf("\nEnter First Value :  ");
	scanf("%d",&x);
	printf("\nEnter Second Value : ");
	scanf("%f",&y);
	printf("\n Enter Your Name :"); 
	gets(s);
	printf("\n Enter Gender (M/F)  :");
	scanf("%c",&d);
	printf("\n Display First Value  = %d \n Display Second Value =%08.3f ",x,y);
	printf("\n Hi %s ,You are %c",s,d);
	
	
}



	


	


