#include<stdio.h>
int main()
{
	int i=0,count=0,j;
	char s[60];
	char ch;
printf("enter a string to be reversed");
scanf("%s",s);// reverse a string without strlen
for(i=0;s[i]!='\0';i++)
{
	count++;
}
for(i=0,j=count-1;i<j;i++,j--)
{
	ch=s[i];
	s[i]=s[j];
	s[j]=ch;
}
printf("%s",s);
}
