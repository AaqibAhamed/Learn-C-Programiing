#include<stdio.h>
#include<string.h>

 char str1[50]="Test1";
 char str2[50]="Test2";
 int answer;
 
  int main()
  {
  	answer=strcmp(str1,str2);
  	if(answer>0)
  	printf("str1 is greater than str2 ");
  	else if(answer==0)
  	printf("str1 is equal to  str2");
  	else
  	printf("str1 is less than str2");
  	
  	return 0;
  	
  }
