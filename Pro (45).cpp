#include<stdio.h>
void ammount();
void discount();
void details();
int sum,i,dis,x;
int main()
{
	ammount();
	discount();
	details();
	
}
  void ammount()
  {
  	int a,p,q,amount;
  	printf("Enter Number of Items \n");
  	scanf("%d",&a);
  	for(i=1;i<=a;i++)
  	{
  	  printf("Item %d \n",i);
	  printf("Enter Item Price\n");
	  scanf("%d",&p);
	  printf("Enter Quantity \n");
	  scanf("\n%d",&q);
	  amount=p*q;
	  printf("\nAmount is=%d \n",ammount);
	  sum=sum+ammount;
	  	
	}
	  printf("Total price %d\n",sum);
	
  }
  
  void discount()
  {
  	int tot;
  	dis=(sum/100)*x;
  	if(sum<=3000)
  	{
  	    x=5;
		 tot=sum-dis;
		 printf("\n Final Total =%d\n",tot);
		 	
	}
	 else if (sum<=6000)
	 {
	 	x=10;
	 	tot=sum-dis;
	 	printf("\n Final Total =%d\n ",tot);
	 	
	 }
	   else
	   {
	   	x=15;
	   	tot=sum-dis;
	   	printf("\n Final Total =%d\n",tot);
	   	
	   }
	   
	  
  	
  }
  
    void details()
    {
    	char cn,date;
    	printf("Customer Name \n %c",cn);
    	printf("Date \n%c",date);
    	printf("NO of Items =%d\n",i);
    	printf("Discount",dis);
    	
	}

