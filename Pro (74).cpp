#include<stdio.h>
int main()
{
	char s[80];
	int i;
	printf("\n Enter String : ");
	gets(s);
	
    for(i=0;s[i]!='\0';i++)   /*while(s[i])  {i++;}*/
    {
    	printf("\n %c    %d",s[i],s[i]);
	}
}
