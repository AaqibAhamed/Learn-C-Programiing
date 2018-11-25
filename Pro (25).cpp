#include<stdio.h>
 main()
{
	int marks[6],sum;
	float avg;
	
	printf("Science &marks of 1st Student :");
	scanf("%d",&marks[0]);
	printf("Science &marks of 2nd Student :");
	scanf("%d",&marks[1]);
	printf("Science &marks of 3rd Student :");
	scanf("%d",&marks[2]);
	printf("Science &marks of 4th Student :");
	scanf("%d",&marks[3]);	
	printf("Science &marks of 5th Student :");
	scanf("%d",&marks[4]);		
 	printf("Science &marks of 6th Student :");
 	scanf("%d",&marks[5]);
 	sum=marks[0]+marks[1]+marks[2]+marks[3]+marks[4]+marks[5];
 	avg=sum/6;
 	
 	printf("sum is =%d\n",sum);
 	printf("Average is =%f",avg);
 	
     return 0;
    
}

