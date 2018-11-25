#include<stdio.h>
int main()
{
	float Ramu_bp,Ramu_da,Ramu_ns;
	float Bamu_bp,Bamu_da,Bamu_ns;
	float Samu_bp,Samu_da,Samu_ns;
	float Total_bp,Total_da,Total_ns;
	
	/*calculation for Ramu*/
	Ramu_bp =150000;
	Ramu_da =Ramu_bp*15.0/100;
	Ramu_ns =Ramu_bp+Ramu_da;
	
	/*calculation for Bamu*/
	Bamu_bp =125000;
	Bamu_da =Bamu_bp*15.0/100;
	Bamu_ns =Bamu_bp+Bamu_da;

	/*calculation for Samu*/
	Samu_bp =255000;
	Samu_da =Samu_bp*15.0/100;
	Samu_ns =Samu_bp+Samu_da;
	
	Total_bp =Ramu_bp+Bamu_bp+Samu_bp;
	Total_da =Ramu_da+Bamu_da+Samu_da;
	Total_ns =Ramu_ns+Bamu_ns+Samu_ns;
	
	
	printf("\n           ULTIMATE SOFTWARE CORPORATION PVT. LTD.");
	printf("\n             SALARY LIST FOR THE MONTH OF APRIL");
	printf("\n---------------------------------------------------------------------");
	printf("\n S.NO       Name           Basic Pay       Allowance     Net Salary");
	printf("\n---------------------------------------------------------------------");
	printf("\n  1         Ramu           %6.2f        %5.2f     %7.2f     ",Ramu_bp,Ramu_da,Ramu_ns);
	printf("\n  2         Bamu           %6.2f        %5.2f     %7.2f     ",Bamu_bp,Bamu_da,Bamu_ns);
	printf("\n  3         Samu           %6.2f        %5.2f     %7.2f     ",Samu_bp,Samu_da,Samu_ns);
	printf("\n---------------------------------------------------------------------");
	printf("\n            Total          %6.2f        %5.2f     %7.2f     ",Total_bp,Total_da,Total_ns );
	printf("\n---------------------------------------------------------------------");
	
	
	
	
	
	
	
	
}
