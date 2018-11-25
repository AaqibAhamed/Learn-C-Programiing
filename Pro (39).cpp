#include<stdio.h>
int main()
{
	int day;
	printf("Enter Number Between 1 to 7 :");
	scanf("%d",&day);
	switch(day)
	{
		case 1:
	    case 2:
	    case 3:
	    case 4:
	    case 5:
	    	    printf("Week Day !\n");
	    	    break;
	    case 6:
	    case 7:
	    	printf("Weekend Day !\n");
	    	break;
	    default:
	    	printf("Invalid Day Number");
	    	break;
}
}
