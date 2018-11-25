#include<stdio.h>
int main()
{
	char n[80];
	int i,a,d,w,o;
	char c;
	
	 a=d=w=o=0;
	
	 printf("\n Enter Text : "); /*My Name is AAQIB.I'm 22 years old.*/
	 gets(n);
	 
	 
	 for(i=0;n[i]!='\0';i++)
	 {
	 	c=n[i];
	 	if((c>='A' && c<='Z') ||(c>='a' && c<='z') )
	 	{
	 	    a++;
		 }
		 else if(c>='0' && c<='9')
		 {
		 	d++;
		 }
		 else if(c==' ' || c=='\n' || c=='\t')
		 {
		 	w++;
		  } 
		  else
		   
		    o++;
		  
	 }
	  
	  printf("\n Character Analyse ! ");
	  printf("\n Alphabates        : %d",a);
	  printf("\n Digits            : %d",d);
	  printf("\n Widespaces        : %d",w);
	  printf("\n Other             : %d",o);
	  
	 
}
