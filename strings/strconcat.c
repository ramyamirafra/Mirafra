#include<stdio.h>
int main()
{
	char s[30];
	char s1[40];
	int i,len1,len2;
	printf("enter a string1");
	scanf("%s",s);
	printf("enter a string2");
	scanf("%s",s1);
	len1=strlen(s);
	len2=strlen(s1);
	for(i=0;i<len2;i++)
	{
		s[len1+i]=s1[i];
	}
	printf("%s",s);
}
        
