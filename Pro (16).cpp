#include<stdio.h>
int max(int N1,int N2);

	int main()
	{
		int N1;
		printf("Input N1 :");
		scanf("%d",N1);
		int N2;
		printf("Input N2 :\n");
		scanf("%d",N2);
		int Rst;
		
		Rst=max(N1,N2);
		printf("Max value : %d",Rst);
		return 0;
	}
	
	int max(int N1,int N2)
	{

	int Rst;
	if (N1 >N2)
	Rst=N1;
	else
	Rst=N2;
	return Rst;
}


