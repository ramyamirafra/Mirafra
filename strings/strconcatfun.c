#include<stdio.h>
#include<string.h>
int compare(char s1[],char s2[])
{
	int i;
	int len1,len2;
        len1=strlen(s1);
	len2=strlen(s2);
	for(i=0;s2[i]!='\0';i++)
	{
		s1[len1+i]=s2[i];
	}
	printf("%s",s1);

	
}
int main()
{
	char s1[30];
	char s2[30];
	printf("enter string1");
	scanf("%s",s1);
	printf("enter string 2");
	scanf("%s",s2);
	compare(s1,s2);
}
