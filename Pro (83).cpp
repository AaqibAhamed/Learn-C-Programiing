#include<stdio.h>
int main()
{
	int i,v,w;
	char n[80]; 
	char c;
    
	
	v=w=0;
	
	printf("\n Input a Text : ");
	gets(n);
	
	for(i=0;n[i]!='\0';i++)
	{
		c=n[i];
		if((c>='A'&& c<='Z')||(c>='a'&& c<='z'))
		
		{
		/*	
		if(c=='a'|| c=='e' || c=='i' || c=='o' || c=='u'|| c=='A'|| c=='E' || c=='I' || c=='O' || c=='U')
		{
			v++;
		}
		else 
		    w++;
		*/
		switch(c)
		{
			case 'a':
			case 'e':
			case 'i':
			case 'o':
			case 'u':
			case 'A':
			case 'E':
			case 'I':
			case 'O':
			case 'U':	
			v++;
		
			break;
		
			default:
				w++;
		
		}
		    	
 		}
	}
	    
	 
	 printf("\n Vowels Count    : %d ",v);
     
	 printf("\n Consonant Count : %d ",w);

	 
	
}
