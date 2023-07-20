#include<stdio.h>
int main()
{
	int i,flag=0;
	char s1[40];
	char s2[50];
	printf("enter string1");
	scanf("%s",s1);
	printf("enter string2");
	scanf("%s",s2);
	for(i=0;s1[i]!='\0'||s2[i]!='\0';i++)
	{
		if(s1[i]!=s2[i])
		{
			flag=1;
			break;
		}
	}
       if(flag==1)
       
	       printf("not same");
	   else
		       printf("same");
       

}

