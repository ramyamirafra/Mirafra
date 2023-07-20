#include<stdio.h>
#include<string.h>
extern char s1[];
char rev(void)
{
	char ch;
	int i,l;
	l=strlen(s1);
	for(i=0;i<l/2;i++)
	{
           ch=s1[i];
	   s1[i]=s1[l-1-i];
	   s1[l-1-i]=ch;
	}
	printf("%s",s1);
}

	
