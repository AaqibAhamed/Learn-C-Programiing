#include<stdio.h>
#include<string.h>
int main()
{
	
	char str1[100],str2[100];
	printf("Enter The String1 as str1 :");
	gets(str1);
	
	printf("\nEnter The String2 as str2  :");
	gets(str2);
	
	if(strcmp(str1,str2)==0)
	printf("\nstr1 is equal to str2\n");
	else if(strcmp(str1,str2)>0)
	printf("\nstr1 is greater than  str2\n");
	else
	printf("\nstr1 is less than  str2\n");
	
	return 0;
}
