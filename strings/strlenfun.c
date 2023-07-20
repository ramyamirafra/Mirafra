#include<stdio.h>
int len(char s[])
{
	int i=0,count=0;
	for(i=0;s[i]!='\0';i++)
	{
		count++;
	}
return count;
}
int main()
{       
	char s[30];
	printf("enter a string to find its length");
	scanf("%s",s);
	int x=len(s);

printf("%d",x);
}

