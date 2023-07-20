#include<stdio.h>
#include<string.h>
int main()
{
	int i=0,l;
	char s[40];
	char ch;
	printf("enter a string to be reversed");
	scanf("%s",s);
	l=strlen(s);
	for(i=0;i<l/2;i++)
	{
		ch=s[i];
		s[i]=s[l-1-i];
		s[l-1-i]=ch;
        }
	printf("%s",s);
}
