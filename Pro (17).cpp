#include<stdio.h>
int max(int n1,int n2);

int main()
{
	int a,b,rst;
	a=500;
	b=700;
	rst=max(a,b);
	printf("Max value is :%d",rst);
	return 0;
	
}

   int max(int n1,int n2)
{
	int rst;
	 if(n1>n2)
	 rst = n1;
	 else
	 rst=n2;
	 return rst;
}
