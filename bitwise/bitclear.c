#include<stdio.h>
int main()
{
	int num,bitposition;
	printf("enter a number");
	scanf("%d",&num);
	printf("enter a bitposition");
	scanf("%d",&bitposition);
	num=num & (~(1<<bitposition));
	printf("%d",num);
}
