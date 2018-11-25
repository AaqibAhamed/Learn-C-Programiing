
#include<stdio.h>
int main()
{
	int i,n,j,s;
	
	printf("\n Input No of Input : ");
	scanf("%d",&n);
 
    printf("\n Enter Values : ");
    
	for(i=1;i<=n;i++)
	{
		scanf("%d",&j);
	
	if(i==1)
	{
		s=j;
	}
     else if (s>j)
     {
     	s=j;
	 }
    }
	 printf("\n Smallest Number : %d",s);
}
