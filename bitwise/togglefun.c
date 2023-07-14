#include<stdio.h>
int toggle(int num,int bitpos);
int main()
{
		int num,bitpos,result;
		printf("enter number\n");
		scanf("%d",&num);
		printf("enter bitpos\n");
		scanf("%d",&bitpos);
		result=toggle(num,bitpos);
		printf("%d",result);
}

int toggle(int num,int bitpos)
{
num=num^(1<<bitpos);
return num;
}
	

