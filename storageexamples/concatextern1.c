#include<stdio.h>
#include<string.h>
extern char s1[];
extern char s2[];
char myconcat(void)
{
	int len1,len2,i;
	len1=strlen(s1);
	len2=strlen(s2);
	for(i=0;i<=len2;i++)
	{
		s1[len1+i]=s2[i];
	}
	printf("%s",s1);
}

