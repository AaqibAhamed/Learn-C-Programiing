#include<stdio.h>
main()
{
	char string1,string2;
	printf("Input string One:");
	scanf("%s",&string1);
	printf("Input string Two:");
	scanf("%s",&string2);
	if(string1==string2)
	{

		printf("string1 is Equal to string2");  
		
	}
		else if(string1<string2)
		{
		
		printf("string2 is Greater than string1");
		
        }
		if(string1>string2)
		{
		
		printf("string1 is Greater than string2 ");
		
	    }
		
	
}
