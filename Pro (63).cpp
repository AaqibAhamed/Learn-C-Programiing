#include<stdio.h>
int main()
{
	char word[10];
	printf("Input Five Letter Word :");
	gets(word);
	
	word[0]=word[0]-30;
	word[1]=word[1]-30;
	word[2]=word[2]-30;
	word[3]-=30;
	word[4]-=30;
	
	printf("\n %s",word);
	
	
}
