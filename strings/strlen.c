#include<stdio.h>
int main()
{
	int i=0,count=0;
	char s[30];
	printf("to find length of string");
	scanf("%s",s);
	for(i=0;s[i]!='\0';i++)
	{
		count++;
	}
	printf("%d",count);
}
