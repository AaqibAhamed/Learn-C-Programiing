#include<stdio.h>
int main()
{
	int i;
	char s[80];
	
	printf("\n Enter The String :\n ");
	gets(s);
	
	for(i=0;s[i]!='\0';i++)
	s[i]--;
	
	printf("\n Show the String : \n%s",s);
	
}
