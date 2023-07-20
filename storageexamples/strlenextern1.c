#include<stdio.h>
extern char s1[30];
extern int count;
int mylength(char s1[],int count)
{
	
	int  i;
	for(i=0;s1[i]!='\0';i++)
	{
		count++;
	}
printf("%s\n",s1);
printf("%d",count);

}
