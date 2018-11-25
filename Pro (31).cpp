#include<stdio.h>
#include<conio.h>
main()
{
	FILE *efptr;
	char Name[30];
	int EmpNo;
	float salary;
	
	efptr=fopen("empl.txt","W");
	
	if(efptr==NULL)
	{
		printf("File does not exists\n");
	
		
	}
	printf("Name of Employee :  ");
	scanf("%s",&Name);
	fprintf(efptr,"Name = %s \n",Name);
	
	printf("\nNo of Employee :");
	scanf("%d",&EmpNo);
	fprintf(efptr,"No of Employee =%d",EmpNo);
	
	printf("\nEnter The Salary : ");
	scanf("%f",&salary);
	fprintf(efptr,"salary = %.3f \n",salary);
	
	fclose(efptr);

}
