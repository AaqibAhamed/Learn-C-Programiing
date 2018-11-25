#include<stdio.h>
int main()
{
	int flag;
	
	printf("\nInput Value for Flag :");
	scanf("%d",&flag);
	
	switch(flag)
	{
		case 1:
			printf("\n  HOT");
			break;
			case 2:
				printf("\n  LUKE WARM");
				break;
				case 3:
				printf("\n   COLD")	;
					break;
						default :
						printf("\n  OUT OF RANGE")	;
							
	}
		
	
}
