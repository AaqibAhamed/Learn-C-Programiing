#include<stdio.h>
int main()
{
        char col;
	
	printf("\n Input Value :");
    col=getchar();
	
	switch(col)
	{
		case 'r' :
		case 'R' :
			printf("\n  RED");
			break;
		case 'g':
		case 'G':
			printf("\n  GREEN");
			break;
		case 'b' :
		case 'B' :
			printf("\n  BLUE");
			break;
		case 'p':
		case 'P':
			printf("\n  PINK");
			break;
			default:
				printf("\n BLACK");
	}
}
